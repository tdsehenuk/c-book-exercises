#include <stdlib.h>
#include <stdio.h> 

int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;


    fahr = lower;
    printf("Celsius\tFahrenheit\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr -32.0);
        printf("%3.2f\t%6.2f\n", celsius, fahr);
        fahr = fahr + step;
    }

    celsius = lower;
    printf("Fahrenheit\tCelsius\n");
        while (celsius <= upper) {
            fahr = (celsius * 9.0/5.0) + 32;
            printf("%3.2f\t%6.2f\n",  fahr, celsius);
            celsius = celsius + step;
    }
        return 0;
}