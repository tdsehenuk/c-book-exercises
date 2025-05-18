#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("=== Using standard headers ===\n");

    // Integer types from <limits.h>
    printf("CHAR_MIN   = %d\n", CHAR_MIN);
    printf("CHAR_MAX   = %d\n", CHAR_MAX);
    printf("UCHAR_MAX  = %u\n", UCHAR_MAX);

    printf("SHRT_MIN   = %d\n", SHRT_MIN);
    printf("SHRT_MAX   = %d\n", SHRT_MAX);
    printf("USHRT_MAX  = %u\n", USHRT_MAX);

    printf("INT_MIN    = %d\n", INT_MIN);
    printf("INT_MAX    = %d\n", INT_MAX);
    printf("UINT_MAX   = %u\n", UINT_MAX);

    printf("LONG_MIN   = %ld\n", LONG_MIN);
    printf("LONG_MAX   = %ld\n", LONG_MAX);
    printf("ULONG_MAX  = %lu\n", ULONG_MAX);

    // Floating-point types from <float.h>
    printf("FLT_MIN    = %e\n", FLT_MIN);
    printf("FLT_MAX    = %e\n", FLT_MAX);
    printf("DBL_MIN    = %e\n", DBL_MIN);
    printf("DBL_MAX    = %e\n", DBL_MAX);
    printf("LDBL_MIN   = %Le\n", LDBL_MIN);
    printf("LDBL_MAX   = %Le\n", LDBL_MAX);

    printf("\n=== Computing integer ranges manually ===\n");

    // Unsigned types: max is all bits set
    printf("Unsigned char max  = %u\n", (unsigned char) ~0);
    printf("Unsigned short max = %u\n", (unsigned short) ~0);
    printf("Unsigned int max   = %u\n", (unsigned int) ~0);
    printf("Unsigned long max  = %lu\n", (unsigned long) ~0);

    // Signed types: max = ~(1 << (bits - 1)), min = -max - 1
    printf("Signed char min    = %d\n", -(char)((unsigned char)~0 >> 1) - 1);
    printf("Signed char max    = %d\n", (char)((unsigned char)~0 >> 1));

    printf("Signed short min   = %d\n", -(short)((unsigned short)~0 >> 1) - 1);
    printf("Signed short max   = %d\n", (short)((unsigned short)~0 >> 1));

    printf("Signed int min     = %d\n", -(int)((unsigned int)~0 >> 1) - 1);
    printf("Signed int max     = %d\n", (int)((unsigned int)~0 >> 1));

    printf("Signed long min    = %ld\n", -(long)((unsigned long)~0 >> 1) - 1);
    printf("Signed long max    = %ld\n", (long)((unsigned long)~0 >> 1));

    return 0;

}