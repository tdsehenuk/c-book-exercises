/*Write a function expand(s1,s2) that expands shorthand notations like a-z in 
the string s1 into the equivalent complete list abc...xyz in s2. Allow for letters of either 
case and digits, and be prepared to handle cases like a-b-c and a-z0-9 and -a-z. Arrange 
that a leading or trailing - is taken literally.  -*/

#include <stdio.h> 

void expand(char s1[], char s2[]) {
    int i = 0;
    int lower;
    int upper;

    
    while (s1[i]) {
        if(s1[i] ) {
            
        } 
    }


}

int main() {
    char az[] = {"a-z"};
    char zeronine[] = {"0-9"};
    char expanded[100];
    
    expand(az, expanded);
    printf("\n%s is expanded into %s" , az, expanded);
    expand(zeronine, expanded);
    printf("\n%s is expanded into %s" , zeronine, expanded);

    return 0;
}