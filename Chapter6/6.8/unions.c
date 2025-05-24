// unions 
// Author: Thomas Sehenuk
// Date: 5/21/25
// Time Start


#include <stdio.h>
#include <string.h>
union example {
    int i; 
    float f;
    char c[20];
};

int main() {

    union example e1;
    e1.i = 5;
    printf("\n%d", e1.i);
    e1.f = 1.1;
    printf("\n%.1f", e1.f);
    strcpy(e1.c, "char");
    printf("\n%s", e1.c);


    return 0;
}
