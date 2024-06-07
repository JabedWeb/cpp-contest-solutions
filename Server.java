import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.net.ServerSocket;
import java.net.Socket;

public class Server  {
    public static void main(String[] args) throws Exception{
        ServerSocket serverSocket = new ServerSocket(5000);

        while(true){
            Socket clientSocket = serverSocket.accept();
            System.out.println("Server connected");

            ObjectInputStream ois= new ObjectInputStream(clientSocket.getInputStream());
            ObjectOutputStream oos = new ObjectOutputStream(clientSocket.getOutputStream());

           try{
                   String message = (String) ois.readObject();
                   System.out.println("Client: " + message);
                   oos.writeObject("Server: " + message);
           }catch(Exception e){
               System.out.println("An error occurred");   
        }
    }
 }
}
