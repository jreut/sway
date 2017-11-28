#ifndef _SWAY_IPC_SERVER_H
#define _SWAY_IPC_SERVER_H
#include <sys/socket.h>
#include "ipc.h"

struct sway_server;

void ipc_init(struct sway_server *server);
void ipc_terminate(void);
struct sockaddr_un *ipc_user_sockaddr(void);

#endif