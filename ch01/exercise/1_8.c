#include <stdio.h>

main() {
    int c;

    int n_space = 0;
    int n_tab = 0;
    int n_line = 0;

    while ( (c = getchar()) != EOF) {
        if (c == ' ')
            ++n_space;

        if (c == '\t')
            ++n_tab;

        if (c == '\n')
            ++n_line;

    }
    printf("%d %d %d\n", n_space, n_tab, n_line);
}