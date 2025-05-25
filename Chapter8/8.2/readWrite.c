/*
Write a program that copies a file to another file using read() and write(). The program should:
Take two arguments from the command line: input file and output file.
Use a buffer of 512 bytes.
Handle errors gracefully (open/read/write/close).
Print a success message at the end.
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <source_file> <destination_file>\n", argv[0]);
        exit(1);
    }

    int inputfd = open(argv[1], O_RDONLY);
        if (inputfd < 0) {
            perror("Error opening source file");
            exit(1);
        }
    

    int outputfd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (inputfd < 0) {
        perror("Error opening destination file");
        close(inputfd);
        exit(1);
    }

    

    char buf[512];
    int bytes_read;


    while((bytes_read = read(inputfd, buf, sizeof(buf))) > 0) {
        if(write(outputfd, buf, bytes_read) != bytes_read) {
            perror("Write error");
            close(inputfd);
            close(outputfd);
            exit(1);
        }
    }


    if (bytes_read < 0) {
        perror("Read error");
    }

    close(inputfd);
    close(outputfd);

}
