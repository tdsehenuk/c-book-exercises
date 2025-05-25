#include <stdio.h>

float fToC(float fahr);
float cToF(float cels);

int main() {
    char c;
    int t;

    do {
        printf("\nPlease enter if you want to convert fahreheit or celsius (f/c): ");
        scanf("%c", &c);
        if (c == 'c') {
            printf("\n Please enter the temperature you want converted: ");
            scanf("%d", &t);
            printf("You wanted %dC to be converted into Fahrenheit. ANSWER: %d", t, cToF(t));
        } else if (c == 'f') {
            printf("\n Please enter the temperature you want converted: ");
            scanf("%d", &t);
            printf("You wanted %dF to be converted into Celcius. ANSWER: %d", t,  fToC(t) );
        } else {
            printf("\nYou did not enter f or c. Please try again.");
        }
    }
    while ((c = getchar()) != EOF);


    return 0;
}

float fToC(float fahr){
    return (fahr - 32.0) * (5.0 / 9.0);
}
float cToF(float cels) {
        return (cels * 9.0 / 5.0) + 32;

}

