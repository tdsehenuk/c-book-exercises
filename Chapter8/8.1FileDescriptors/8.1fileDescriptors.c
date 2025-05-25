/*
Write a program that:
Opens a file input.txt
Writes the first 100 bytes into output.txt
Use only open(), read(), write(), close()
*/
// Author: Thomas Sehenuk
// Date: 5/24/25
// Checkout README.md for SDLC Documentation and more info
//time start 9:46
//time stop: 10:01
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int fd = open("input.txt", O_RDONLY);
    if(fd < 0) {
        perror("open");
        exit(1);
    }

    char buffer[1024];
    int n;

    while ((n = read(fd, buffer, sizeof(buffer))) > 0) {
        write(STDOUT_FILENO, buffer, n);
    }

    if (n < 0) {
        perror("read");
    }

    close(fd);
    return 0;
}