#include <stdio.h>

main() {
    int c;
    int prev = -1;


    while ( (c = getchar()) != EOF) {
        if (c == ' '){
            if (prev != ' ') {
                putchar(c);
            }
        }
        else {
            putchar(c);
        }

        prev = c;
    }
}