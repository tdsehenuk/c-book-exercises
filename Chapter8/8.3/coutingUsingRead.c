/*
Count tabs and newlines in a file
Only uses read()
No writing, no output file
Just prints how many '\t' and '\n' characters are in a file
*/


//time start
//time stop

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int inputFD = open(argv[1], O_RDONLY);
    int ouputFD = open(argv[2], O_RDONLY);

    char buf[512]; 
    int n;
    int tabcounter;
    int nlcounter;

    while((n=read(inputFD, buf, sizeof(buf))) > 0) {
        for(int i = 0; i < n; i++) {
            if(buf[i] == '\n') nlcounter++;
            if(buf[i] == '\t') tabcounter++;
        }
    }

    if (n < 0) {
        perror("Error reading file");
        close(inputFD);
        exit(1);
    }

    return 0;
}