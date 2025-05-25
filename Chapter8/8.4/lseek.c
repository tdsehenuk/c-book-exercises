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