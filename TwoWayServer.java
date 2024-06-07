
import java.io.DataInputStream; 
import java.io.DataOutputStream; 
import java.io.IOException; 
import java.net.ServerSocket; 
import java.net.Socket; 
import java.util.Scanner;  
 
public class TwoWayServer { 
 
    public static void main(String[] args) throws IOException { 
    ServerSocket serverSocket = new ServerSocket(5000);  
   System.out.println("Server started on port " +   
serverSocket.getLocalPort()); 
 
   Socket clientSocket = serverSocket.accept(); 
   System.out.println("Client connected: " + 
clientSocket.getRemoteSocketAddress()); 
 
  DataOutputStream outputToClient = new 
DataOutputStream(clientSocket.getOutputStream()); 
  DataInputStream inputFromClient = new 
DataInputStream(clientSocket.getInputStream()); 
 
        String clientMessage; 
        String serverResponse; 
      Scanner scanner = new Scanner(System.in);  
 
        while (true) { 
            clientMessage = inputFromClient.readUTF(); 
 
            if (clientMessage.equals("stop")) { 
                break; 
            } 
 
            System.out.println("Client: " + clientMessage); 
 
            System.out.print("Server reply: "); 
            serverResponse = scanner.nextLine(); 
 
            outputToClient.writeUTF(serverResponse); 
        } 
 
        outputToClient.close(); 
        inputFromClient.close(); 
        scanner.close();  
        clientSocket.close(); 
        serverSocket.close(); 
    }} 