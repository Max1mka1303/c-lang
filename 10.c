#include <stdio.h>
    const int NODE_ID = 13;
    int packet_size = NODE_ID * 4;
    int total_transfer = NODE_ID * 3;
    void ping(){
        printf("PING");
    }
    void pong(){
        printf("PONG");
    }
    void handshake(){
        ping();
        printf("-");
        pong();
        printf("-");
        ping();
    }
    int main(){
        handshake();
        printf(":%d\n", packet_size);
        handshake();
        printf(":%d\n", total_transfer);
        printf("SESSION:CLOSED");
    }