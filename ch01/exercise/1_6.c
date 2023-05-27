#include <stdio.h>


main() {
    int c;
    
    c = getchar();
    while (c != EOF) {
        printf("%d\n", c != EOF);
        putchar(c);
        c = getchar();
    }
}