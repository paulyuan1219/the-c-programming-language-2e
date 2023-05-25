#include <stdio.h>
#define MAXLINE 1000

/*
The code you provided has an error. The issue lies with the function name getline. The name getline is already used as a standard library function in C, so you should avoid using it as a function name to prevent conflicts.
*/


int getline_1(char line[], int maxline);

main() {
    int len;
    int max;
    char line[MAXLINE];
    char to[MAXLINE];

    max = 0;
    while ((len = getline_1(line, MAXLINE)) > 0) {
        if (len > 5) {
            printf("%s\n", line);
        }
    }
    return 0;

}

int getline_1(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c=getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }

    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
