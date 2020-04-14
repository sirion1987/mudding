#include "includes/mudding.h"

int main (void)
{
  int port = 8002;
  int socket_fd = init_server_socket(port);

  if (socket_fd < 0)
    {
      perror("Failed init socket server");
      exit(1);
    }

  return EXIT_SUCCESS;
}
