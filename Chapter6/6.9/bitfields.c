//start: 5:40
//end: 5:45

#include <stdio.h>
#include <stdlib.h>

struct Status {
    unsigned int powerOn : 1;
    unsigned int error : 1;
    unsigned int mode : 3;
    unsigned int temperature : 7;
    unsigned int reserved : 4;
};


int main() {

    struct Status device = {0};
    device.powerOn = 1;
    device.error = 0;
    device.mode = 3;
    device.temperature = 72;
    device.reserved = 0;

    printf("Initial Device Status:\n");
    printf("Power: %d\n", device.powerOn);
    printf("Error: %d\n", device.error);
    printf("Mode: %d\n", device.mode);
    printf("Temperature: %d\n", device.temperature);
    printf("Reserved: %d\n", device.reserved);

    device.mode = 5;
    device.temperature = 100;

    printf("\nUpdated Device Status:\n");
    printf("Power: %d\n", device.powerOn);
    printf("Error: %d\n", device.error);
    printf("Mode: %d\n", device.mode);
    printf("Temperature: %d\n", device.temperature);
    printf("Reserved: %d\n", device.reserved);

    printf("\nSize of struct status: %zu bytes\n", sizeof(device));

    return 0;
}