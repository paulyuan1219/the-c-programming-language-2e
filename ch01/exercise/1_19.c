#include <stdio.h>
#define MAXLINE 1000

/*
The code you provided has an error. The issue lies with the function name getline. The name getline is already used as a standard library function in C, so you should avoid using it as a function name to prevent conflicts.
*/


int getline_1(char line[], int maxline);
void reverse(char to[], char from[]);

main() {
    int len;
    int max;
    char line[MAXLINE];
    char to[MAXLINE];

    max = 0;
    while ((len = getline_1(line, MAXLINE)) > 0) {
        reverse(to, line);
        printf("%s\n", to);
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

void reverse(char to[], char from[]) {
    int i = 0;
    int len = 0;

    for(i = 0; from[i] != '\0' && from[i] != '\n'; i++) {
        len++;
    }

    /* from[len] == '\n' or '\0' */

    for(i = 0; i < len; i++) {
        to[i] = from[len -1 - i];
    }
    to[len] = '\0';
}