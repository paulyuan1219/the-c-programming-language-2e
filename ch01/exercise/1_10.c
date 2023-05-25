#include <stdio.h>

/* the backspace char is not working properly*/

main() {
    int c;


    while ( (c = getchar()) != EOF) {
        if (c == '\t'){
            putchar('\\');
            putchar('t');
        }
        else if (c == '\b'){
            putchar('\\');
            putchar('b');
        }
        else if (c == '\\'){
            putchar('\\');
            putchar('\\');
        }
        else {
            putchar(c);
        }
    }
}