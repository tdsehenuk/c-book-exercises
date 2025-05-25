// Author: Thomas Sehenuk
// Date: 5/23/25
// Checkout README.md for SDLC Documentation and more info
//time start 2:06
//time stop 3:52


#include <stdio.h>

typedef struct {
    int x;
    int y;
}Point;

void printPoint( Point p1) {
    printf("\n(%d, %d)", p1.x, p1.y);
}

int main() {

    Point p1; 
    p1.x = 5;
    p1.y = 10;
    printPoint(p1);

    return 0;
}
