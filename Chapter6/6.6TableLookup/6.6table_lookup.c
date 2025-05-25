// Author: Thomas Sehenuk
// Date: 5/23/25
// Checkout README.md for SDLC Documentation and more info
//time start 4:55
//time stop 5:02

#include <stdlib.h>
#include <stdio.h>

const char *daysOfWeek[] = {
                        "Sunday", "Monday", "Tuesday", "Wednesday",
                        "Thursday", "Friday", "Saturday"
};


const char *getDayLookup(int day) {
    if(day < 0 || day > 6) {
        printf("\nInvalid Day");
    }

    return daysOfWeek[day];
}


int main() {
    
    printf("Lookup Table version:\n");
    for (int i = 0; i < 7; i++) {
        printf("Day %d: %s\n", i, getDayLookup(i));
    }

    return 0;
}
