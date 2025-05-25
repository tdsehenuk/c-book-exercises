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

    return 0;
}