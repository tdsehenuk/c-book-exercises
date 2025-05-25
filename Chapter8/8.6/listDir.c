/*
Write a program that opens a directory, reads its contents, and prints out the file/directory names inside.
*/

//Time start 12:42
//Time close 12:51

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main (int argc, char *argv[]) {
    const char *dirname = ".";
  
    if (argc > 1) {
        dirname = argv[1];  // Use directory name from command line if provided
    }

    DIR *dir = opendir(dirname);
    if (dir == NULL) {
        perror("opendir");
        return 1;
    }

    struct dirent *entry; 
    while((entry = readdir(dir)) != NULL) {
        printf("%s\n", entry->d_name);
    }

    closedir(dir);

    return 0;
}