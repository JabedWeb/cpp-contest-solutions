package socketTime;

import java.io.ObjectOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.net.Socket;
import java.util.Scanner;

public class Client {
    public static void main(String[] args) {
        Socket socket = null;
        ObjectOutputStream oos = null;
        ObjectInputStream ois = null;
        Scanner sc = null;

        try {
            socket = new Socket("localhost", 5000);
            System.out.println("Client Started");

            oos = new ObjectOutputStream(socket.getOutputStream());
            ois = new ObjectInputStream(socket.getInputStream());
            sc = new Scanner(System.in);

            // Notify client about the connection time
            String connectionTime = (String) ois.readObject();
            System.out.println("Connected at: " + connectionTime);

            String message;
            do {
                System.out.print("Enter 'prime' to check a number or 'concat' to concatenate strings ('stop' to end): ");
                message = sc.nextLine();

                oos.writeObject(message);
                if (message.equalsIgnoreCase("prime")) {
                    System.out.print("Enter number to check: ");
                    int number = Integer.parseInt(sc.nextLine());
                    oos.writeObject(number);
                } else if (message.equalsIgnoreCase("concat")) {
                    System.out.print("Enter first string: ");
                    String str1 = sc.nextLine();
                    oos.writeObject(str1);
                    System.out.print("Enter second string: ");
                    String str2 = sc.nextLine();
                    oos.writeObject(str2);
                }

                if (!message.equalsIgnoreCase("stop")) {
                    String response = (String) ois.readObject();
                    System.out.println("Server: " + response);
                }

            } while (!message.equalsIgnoreCase("stop"));

        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            try {
                if (sc != null) sc.close();
                if (ois != null) ois.close();
                if (oos != null) oos.close();
                if (socket != null) socket.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }
}
