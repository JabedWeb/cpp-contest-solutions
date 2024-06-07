package socketTime;

import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.IOException;
import java.net.ServerSocket;
import java.net.Socket;
import java.time.LocalDateTime;
import java.util.ArrayList;
import java.util.List;

public class Server {
    private static final int MAX_CLIENTS = 5;
    private static int clientCount = 0;
    private static List<ClientInfo> clientList = new ArrayList<>();

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
                LocalDateTime joinTime = LocalDateTime.now();
                System.out.println("Client #" + clientCount + " Connected at " + joinTime);

                // Handle each client in a new thread
                new Thread(new ClientHandler(socket, joinTime)).start();
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    static class ClientHandler implements Runnable {
        private Socket socket;
        private LocalDateTime joinTime;

        public ClientHandler(Socket socket, LocalDateTime joinTime) {
            this.socket = socket;
            this.joinTime = joinTime;
        }

        @Override
        public void run() {
            try (ObjectInputStream ois = new ObjectInputStream(socket.getInputStream());
                 ObjectOutputStream oos = new ObjectOutputStream(socket.getOutputStream())) {

                // Notify the client of the connection time
                oos.writeObject(joinTime.toString());

                String message;
                do {
                    // Read message from client
                    message = (String) ois.readObject();
                    System.out.println("Request from Client: " + message);

                    String response = "";
                    if (message.equalsIgnoreCase("prime")) {
                        int number = (Integer) ois.readObject();
                        response = number + " is " + (isPrime(number) ? "a prime number." : "not a prime number.");
                    } else if (message.equalsIgnoreCase("concat")) {
                        String str1 = (String) ois.readObject();
                        String str2 = (String) ois.readObject();
                        response = "Concatenated string: " + str1 + str2;
                    }

                    oos.writeObject(response);

                } while (!message.equalsIgnoreCase("stop"));

                LocalDateTime leaveTime = LocalDateTime.now();
                System.out.println("Client disconnected at " + leaveTime);
                clientList.add(new ClientInfo(joinTime, leaveTime));

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

        private boolean isPrime(int number) {
            if (number <= 1) return false;
            for (int i = 2; i < Math.sqrt(number) + 1; i++) {
                if (number % i == 0) return false;
            }
            return true;
        }
    }

    static class ClientInfo {
        private LocalDateTime joinTime;
        private LocalDateTime leaveTime;

        public ClientInfo(LocalDateTime joinTime, LocalDateTime leaveTime) {
            this.joinTime = joinTime;
            this.leaveTime = leaveTime;
        }

        public LocalDateTime getJoinTime() {
            return joinTime;
        }

        public LocalDateTime getLeaveTime() {
            return leaveTime;
        }
    }
}

