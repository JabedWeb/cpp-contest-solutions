import java.io.ObjectOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.net.Socket;
import java.util.Scanner;

public class Client{
    public static void main(String[] args) throws IOException{
       Socket socket = new Socket("localhost", 5000);
       System.out.println("client Started");

       //must first create the output stream before the input stream
        ObjectOutputStream oos = new ObjectOutputStream(socket.getOutputStream());
         ObjectInputStream ois = new ObjectInputStream(socket.getInputStream());
         
         Scanner sc =new Scanner(System.in);
         String messsag= sc.nextLine();
 
            
        try {
             //send to server 
         oos.writeObject(messsag);
         //receive from server
         String fromServer = (String) ois.readObject();
         System.out.println("Server: " + fromServer);
        } catch (Exception e) {
            // TODO: handle exception
        }
        
    }
}