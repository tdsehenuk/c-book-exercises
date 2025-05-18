#include <stdio.h>
#include <stdlib.h>

void squeeze(char s[], int c);

int main() {
    char string[100];
    int i = 0;
    int c;

    printf("Enter a string (press Ctrl+D to end input on Unix/Linux or Ctrl+Z on Windows):\n");

    while ((c = getchar()) != EOF && i < sizeof(string) - 1) {
        string[i++] = c;
    }
    string[i] = '\0';  // Null-terminate the string

    // Character to remove — example: remove character 'a'
    char to_remove = 'a';
    squeeze(string, to_remove);

    printf("String after removing '%c':\n%s", to_remove, string);

    return 0;
}

void squeeze(char s[], int c) {
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}