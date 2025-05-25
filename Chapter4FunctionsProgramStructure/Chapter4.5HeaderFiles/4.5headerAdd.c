/*🔸 Concept: Using .h files
create a file mathutils.h that declares a function int add(int a, int b);
Write the implementation in another file and include it in your main program.*/

// Author: Thomas Sehenuk
// Date: 5/18/25
// Estimated Time (testing/writing/coding/github): 15min
// Checkout README.md for SDLC Documentation and more info

#include <stdio.h>
#include "mathutils.h"

int main() {
    int result = 0;
    result = add(5, 10);
    printf("Result of 5 + 10: %d", result);

    return 0;
}
