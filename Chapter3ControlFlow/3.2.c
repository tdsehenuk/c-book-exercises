/*

Exercise 3-2. Write a function escape(s,t) that converts characters like newline and tab 
into visible escape sequences like \n and \t as it copies the string t to s. Use a switch. Write 
a function for the other direction as well, converting escape sequences into the real characters.  
*/

#include <stdio.h>

void escape(char s[], char t[]) {
    int i = 0;
    int j = 0;
     
    while(t[i] != '\0') {
        switch(t[i]) {
            case '\n':
                s[j++] = '\\';
                s[j++] = 'n';
                break;
            case '\t':
                 s[j++] = '\\';
                 s[j++] = 't';
                break;
            default: 
                s[j++] = t[i];
                 break;
        }
        i++;
    }
    s[j] = '\0';
}

void unescape(char s[], char t[]) {
    int i = 0, j = 0;
    while (t[i] != '\0') {
        if (t[i] == '\\') {
            switch (t[i + 1]) {
                case 'n':
                    s[j++] = '\n';
                    i += 2;
                    break;
                case 't':
                    s[j++] = '\t';
                    i += 2;
                    break;
                default:
                    s[j++] = t[i++];
                    s[j++] = t[i++];
                    break;
            }
        } else {
            s[j++] = t[i++];
        }
    }
    s[j] = '\0';
}


int main() {
    char t[] = "Hello\nWorld\t!";
    char u[] =  "Hello\\nWorld\\t!";
    char s[100]; // Make sure this is large enough

    escape(s, t);
    printf("Escaped: %s\n", s);  // Output: Hello\nWorld\t!
    unescape(s, u);
    printf("Unescaped: %s\n", s);  
    
    return 0;
}

