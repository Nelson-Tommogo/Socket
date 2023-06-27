#include <stdio.h>
#include <stdlib.h>
#include <arpa/inet.h>

int main() {
    char ip_address_str[] = "192.168.0.1";
    struct in_addr ip_address;

    // Convert presentation format to numeric format
    if (inet_pton(AF_INET, ip_address_str, &(ip_address.s_addr)) <= 0) {
        perror("Invalid address");
        exit(EXIT_FAILURE);
    }

    // Convert numeric format to presentation format
    char ip_address_str_converted[INET_ADDRSTRLEN];
    if (inet_ntop(AF_INET, &(ip_address.s_addr), ip_address_str_converted, INET_ADDRSTRLEN) == NULL) {
        perror("Conversion failed");
        exit(EXIT_FAILURE);
    }

    printf("Original IP: %s\n", ip_address_str);
    printf("Converted IP: %s\n", ip_address_str_converted);

    return 0;
}
