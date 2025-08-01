#include <winsock2.h>
#include <stdio.h>

int main() {
    WSADATA wsa;

    if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0) {
        printf("WSAStartup failed with error: %d\n", WSAGetLastError());
        return 1;
    }

    printf("initialized successfully\n");

    WSACleanup();
    return 0;
}
