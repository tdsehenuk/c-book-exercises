/*
Write a program that
Opens a file called log.txt.
If it exists, truncate it (empty it).
If it doesn’t exist, create it.
Then write "Log started.\n" into it.
Use only low-level functions (open, write, etc.). No fopen or fprintf.
*/
//time start 12:12
//time stop

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    int fd = open("input.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
      if (fd < 0) {
        perror("open");
        exit(1);
    }

    char *message = "Log started.\n";

    int n = write(fd, message, 13);
    if(n != 13) {
      perror("write");
        close(fd);
        exit(1);  
    }

    close(fd);
    printf("log.txt created and initialized.\n");
    return 0;

    return 0;
}

