#include <stdio.h> 


int htoi (char hexadecimal[]);

int main() {

    char hexadecimal[8] = {0};

    int i =0;
    int c = 0;
    printf("Enter a hexadecimal digit at least length of 8. ");
    while((c = getchar()) != EOF) {
        hexadecimal[i++] = c;
    }

    printf("\nThe value of %s is: %d", hexadecimal, htoi(hexadecimal));
    return 0;
}

int htoi(char hexadecimal[]) {
    int i = 0;
    int result = 0;

    // Check if the string starts with "0x" or "0X"
    if (hexadecimal[i] == '0' && (hexadecimal[i + 1] == 'x' || hexadecimal[i + 1] == 'X')) {
        i = 2;  // Skip over "0x" or "0X"
    }

    // Convert each character to its integer value
    while (hexadecimal[i] != '\0') {
        char c = hexadecimal[i];
        int value;

        // Convert the character to a number
        if (c >= '0' && c <= '9') {
            value = c - '0';  
        } else if (c >= 'a' && c <= 'f') {
            value = c - 'a' + 10;  
        } else if (c >= 'A' && c <= 'F') {
            value = c - 'A' + 10;  
        } else {
            break;  // Stop if we encounter an invalid character
        }

        result = result * 16 + value;  
        i++;;
}
}