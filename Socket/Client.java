package Socket;

// import java.io.ObjectOutputStream;
// import java.io.IOException;
// import java.io.ObjectInputStream;
// import java.net.Socket;
// import java.util.Scanner;

// public class Client {
//     public static void main(String[] args) {
//         Socket socket = null;
//         ObjectOutputStream oos = null;
//         ObjectInputStream ois = null;
//         Scanner sc = null;

//         try {
//             socket = new Socket("localhost", 5000);
//             System.out.println("Client Started");

//             oos = new ObjectOutputStream(socket.getOutputStream());
//             ois = new ObjectInputStream(socket.getInputStream());
//             sc = new Scanner(System.in);

//             System.out.print("Enter your message: ");
//             String message = sc.nextLine();

//             // Send to server
//             oos.writeObject(message);

//             // Receive from server
//             String fromServer = (String) ois.readObject();
//             System.out.println("Server: " + fromServer);

//         } catch (Exception e) {
//             e.printStackTrace();
//         } finally {
//             try {
//                 if (sc != null) sc.close();
//                 if (ois != null) ois.close();
//                 if (oos != null) oos.close();
//                 if (socket != null) socket.close();
//             } catch (IOException e) {
//                 e.printStackTrace();
//             }
//         }
//     }
// }
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

            String message;
            do {
                System.out.print("Need to Check: ");
                message = sc.nextLine();

                // Send to server
                oos.writeObject(message);

                // Receive from server
                String fromServer = (String) ois.readObject();
                System.out.println("Reply from Server: " + fromServer);

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
