/*
Write a program that:
- Takes a filename as a command-line argument.
- Opens the specified file for reading.
- Moves the file pointer to the 10th byte from the beginning of the file.
- Reads up to 20 bytes from that position.
- Prints the read bytes as a null-terminated string.
- Handles errors appropriately (opening, seeking, reading).
*/
// Author: Thomas Sehenuk
// Date: 5/24/25
// Checkout README.md for SDLC Documentation and more info
// no time kept-


#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        exit(1);
    }

    int inputfd = open(argv[1], O_RDONLY);
    if (inputfd < 0) {
        perror("open");
        exit(1);
    }

    off_t new_pos = lseek(inputfd, 10, SEEK_SET);
    if (new_pos == -1) {
        perror("lseek");
        close(inputfd);
        exit(1);
    }

    char buffer[21]; 
    ssize_t n = read(inputfd, buffer, 20);
    if (n < 0) {
        perror("read");
        close(inputfd);
        exit(1);
    }

    buffer[n] = '\0'; 
    printf("Read from offset 10: \"%s\"\n", buffer);

    close(inputfd);
    return 0;

}