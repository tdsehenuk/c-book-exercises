// typedef usage 
// Author: Thomas Sehenuk
// Date: 5/21/25
//Time start 5:05 
//Time done: 5:10


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
