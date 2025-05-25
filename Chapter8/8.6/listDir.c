/*
Write a program that opens a directory, reads its contents, and prints out the file/directory names inside.
*/

//Time start
//Time close

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main (int argc, int *argv[]) {
    const char *dirname = ".";
  
    if (argc > 1) {
        dirname = argv[1];  // Use directory name from command line if provided
    }

    DIR *dir = opendir(dirname);
    if (dir == NULL) {
        perror("opendir");
        return 1;
    }

    return 0;
}