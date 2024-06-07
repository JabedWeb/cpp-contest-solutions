package Socket;

// import java.io.ObjectOutputStream;
// import java.io.ObjectInputStream;
// import java.io.IOException;
// import java.net.ServerSocket;
// import java.net.Socket;

// public class Server {
//     public static void main(String[] args) {
//         ServerSocket serverSocket = null;
//         Socket socket = null;
//         ObjectOutputStream oos = null;
//         ObjectInputStream ois = null;

//         try {
//             serverSocket = new ServerSocket(5000);
//             System.out.println("Server Started");
//             socket = serverSocket.accept();
//             System.out.println("Client Connected");

//             oos = new ObjectOutputStream(socket.getOutputStream());
//             ois = new ObjectInputStream(socket.getInputStream());

//             // Receive from client
//             String fromClient = (String) ois.readObject();
//             System.out.println("Client: " + fromClient);

//             // Send to client
//             oos.writeObject("Message received: " + fromClient);

//         } catch (Exception e) {
//             e.printStackTrace();
//         } finally {
//             try {
//                 if (ois != null) ois.close();
//                 if (oos != null) oos.close();
//                 if (socket != null) socket.close();
//                 if (serverSocket != null) serverSocket.close();
//             } catch (IOException e) {
//                 e.printStackTrace();
//             }
//         }
//     }
// }
// import java.io.ObjectInputStream;
// import java.io.ObjectOutputStream;
// import java.io.IOException;
// import java.net.ServerSocket;
// import java.net.Socket;

// public class Server {
//     public static void main(String[] args) {
//         ServerSocket serverSocket = null;
//         Socket socket = null;
//         ObjectOutputStream oos = null;
//         ObjectInputStream ois = null;

//         try {
//             serverSocket = new ServerSocket(5000);
//             System.out.println("Server Started");

//             while (true) {
//                 socket = serverSocket.accept();
//                 System.out.println("Client Connected");

//                 oos = new ObjectOutputStream(socket.getOutputStream());
//                 ois = new ObjectInputStream(socket.getInputStream());

//                 // Read message from client
//                 String message = (String) ois.readObject();
//                 System.out.println("Request from Client: " + message);

//                 // Check if the message is a palindrome
//                 String response = message + " is " + (isPalindrome(message) ? "" : "not ") + "a palindrome word";
//                 oos.writeObject(response);
//             }
//         } catch (Exception e) {
//             e.printStackTrace();
//         } finally {
//             try {
//                 if (ois != null) ois.close();
//                 if (oos != null) oos.close();
//                 if (socket != null) socket.close();
//                 if (serverSocket != null) serverSocket.close();
//             } catch (IOException e) {
//                 e.printStackTrace();
//             }
//         }
//     }

//     public static boolean isPalindrome(String str) {
//         String cleaned = str.replaceAll("\\s+", "").toLowerCase();
//         int length = cleaned.length();
//         for (int i = 0; i < length / 2; i++) {
//             if (cleaned.charAt(i) != cleaned.charAt(length - 1 - i)) {
//                 return false;
//             }
//         }
//         return true;
//     }
// }








import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.IOException;
import java.net.ServerSocket;
import java.net.Socket;

public class Server {
    private static final int MAX_CLIENTS = 5;
    private static int clientCount = 0;

    public static void main(String[] args) {
        try (ServerSocket serverSocket = new ServerSocket(5000)) {
            System.out.println("Server Started");

            while (true) {
                if (clientCount >= MAX_CLIENTS) {
                    System.out.println("Maximum client limit reached. No more clients will be accepted.");
                    break;
                }

                Socket socket = serverSocket.accept();
                clientCount++;
                System.out.println("Client #" + clientCount + " Connected");

                // Handle each client in a new thread
                new Thread(new ClientHandler(socket)).start();
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    static class ClientHandler implements Runnable {
        private Socket socket;

        public ClientHandler(Socket socket) {
            this.socket = socket;
        }

        @Override
        public void run() {
            try (ObjectInputStream ois = new ObjectInputStream(socket.getInputStream());
                 ObjectOutputStream oos = new ObjectOutputStream(socket.getOutputStream())) {

                String message;
                do {
                    // Read message from client
                    message = (String) ois.readObject();
                    System.out.println("Request from Client: " + message);

                    // Check if the message is a palindrome
                    String response = message + " is " + (isPalindrome(message) ? "" : "not ") + "a palindrome word";
                    oos.writeObject(response);

                } while (!message.equalsIgnoreCase("stop"));

            } catch (IOException | ClassNotFoundException e) {
                e.printStackTrace();
            } finally {
                try {
                    socket.close();
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
        }

        public static boolean isPalindrome(String str) {
            String cleaned = str.replaceAll("\\s+", "").toLowerCase();
            int length = cleaned.length();
            for (int i = 0; i < length / 2; i++) {
                if (cleaned.charAt(i) != cleaned.charAt(length - 1 - i)) {
                    return false;
                }
            }
            return true;
        }
    }
}
