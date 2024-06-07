import java.io.BufferedReader; 
  import java.io.DataInputStream; 
  import java.io.DataOutputStream; 
  import java.io.IOException; 
  import java.io.InputStreamReader; 
  import java.net.*; 
 
public class TwoWayClient 
{ 
    public static void main(String[] args) throws IOException { 
        Socket s = new Socket("localhost", 5000); 
 
   System.out.println("Client Connected at server Handshaking port " 
+s.getPort()); 
   System.out.println("Client's communication port " + 
s.getLocalPort()); 
   System.out.println("Client is Connected"); 
 
 
        DataOutputStream output = new 
DataOutputStream(s.getOutputStream()); 
        DataInputStream input = new DataInputStream(s.getInputStream()); 
        BufferedReader read = new BufferedReader(new 
InputStreamReader(System.in)); 
 
        String str = ""; 
        String serverResponse; 
 
 
    while (!str.equals("stop")) 
        { 
   System.out.println("Enter message to send (or 'stop' to close): "); 
   System.out.print("Client: "); 
             
str = read.readLine(); 
 
 
            output.writeUTF(str); 
 
            if (!str.equals("stop")) { 
                serverResponse = input.readUTF(); 
                System.out.println("Server: " + serverResponse); 
            } 
        } 
 
        output.close(); 
        input.close(); 
        read.close(); 
        s.close(); 
 }} 
 
 
//TwoWayServer.java 
 