#include <stdio.h>
#include <limits.h>

int main() {
    printf("Minimum value of char: %d\n", CHAR_MIN);
    printf("Maximum value of char: %d\n", CHAR_MAX);
    printf("Maximum value of unsigned char: %u\n", UCHAR_MAX);

    printf("Unsigned short int:\n");
    printf("  Maximum value: %u\n", USHRT_MAX);

    printf("Short int:\n");
    printf("  Minimum value: %d\n", SHRT_MIN);
    printf("  Maximum value: %d\n", SHRT_MAX);

    printf("Unsigned int:\n");
    printf("  Maximum value: %u\n", UINT_MAX);

    printf("Int:\n");
    printf("  Minimum value: %d\n", INT_MIN);
    printf("  Maximum value: %d\n", INT_MAX);

    printf("Unsigned long:\n");
    printf("  Maximum value: %lu\n", ULONG_MAX);

    printf("Long:\n");
    printf("  Minimum value: %ld\n", LONG_MIN);
    printf("  Maximum value: %ld\n", LONG_MAX);    

    return 0;
}
