#include "includes/mudding.h"

int init_server_socket(int port)
{
  struct sockaddr_in socket_address;
  int socket_fd;
  int socket_option = 1;
  int max_pending_connections = 3;

  socket_fd = socket(AF_INET, SOCK_STREAM, 0);

  if (socket_fd < 0)
    {
      perror("Failed init Socket");
      return -1;
    }

  if (setsockopt(socket_fd,
                 SOL_SOCKET,
                 SO_REUSEADDR,
                 (char *)&socket_option,
                 sizeof(socket_option)) < 0)
    {
      perror("Failed set socket options");
      return -1;
    }

  socket_address.sin_family = AF_INET;
  socket_address.sin_addr.s_addr = INADDR_ANY;
  socket_address.sin_port = htons(port);
  memset(&(socket_address.sin_zero), '\0', 8);

  if (bind(socket_fd,
           (struct sockaddr *)&socket_address,
           sizeof(socket_address)) < 0)
    {
      perror("Failed bind");
      return -1;
    }

  if (listen(socket_fd, max_pending_connections) < 0)
    {
      perror("Failed listen");
      return -1;
    }

  return socket_fd;
}

int init_client_socket(int server_socket_fd)
{
  struct sockaddr_in client_socket_address;
  socklen_t client_address_len;
  int client_socket_fd;
  int flag;

  client_address_len = sizeof(client_socket_address);

  client_socket_fd = accept(server_socket_fd,
                            (struct sockaddr *)&client_socket_address,
                            &client_address_len);

  if (client_socket_fd < 0)
    {
      perror("Failed accept");
      return -1;
    }

  flag = fcntl(client_socket_fd, F_GETFL);
  flag |= O_NONBLOCK;
  fcntl(client_socket_fd, F_SETFL, flag);

  return client_socket_fd;
}
