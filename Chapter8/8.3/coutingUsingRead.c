/*
Count tabs and newlines in a file
Only uses read()
No writing, no output file
Just prints how many '\t' and '\n' characters are in a file
*/

//----------VSCODE does not count the correct tabs when \t occurs it uses 3 spaces (ascii 32) instead of ascii 9

//time start 11:10
//time stop 11:45

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int inputFD = open(argv[1], O_RDONLY);

    char buf[512]; 
    int n = 0;
    int tabcounter = 0;
    int nlcounter = 0;

    while((n=read(inputFD, buf, sizeof(buf))) > 0) {
        for(int i = 0; i < n; i++) {
            printf("char: '%c' ascii: %d\n", buf[i], (unsigned char)buf[i]);
            if(buf[i] == '\n') nlcounter++;
            if(buf[i] == '\t') tabcounter++;
        }
    }

    if (n < 0) {
        perror("Error reading file");
        close(inputFD);
        exit(1);
    }

    close(inputFD);

    printf("Tabs: %d\n", tabcounter);
    printf("Newlines: %d\n", nlcounter);

    return 0;
}