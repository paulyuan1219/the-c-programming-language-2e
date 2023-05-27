#include <stdio.h>

#define MAXLINE 100

int atoi(char s[]) {
    int i, n;
    n = 0;
    for(i = 0; s[i] >= '0' && s[i] <= '9'; i++) {
        n = 10 * n + (s[i] - '0');
    }
    return n;
}

int lower(int c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 'a' - 'A';
    } else {
        return c;
    }
}

int htoi(char s[]) {
    int i = 0;
    long n = 0;
    int delta = 0;

    /* get rid of 0x or 0X */
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
        i = 2;
    }

    for(; s[i] >= '0' && s[i] <= '9' || s[i] >= 'a' && s[i] <= 'f' || s[i] >= 'A' && s[i] <= 'F'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            delta = s[i] - '0';
        } else if (s[i] >= 'a' && s[i] <= 'f') {
            delta = 10 + s[i] - 'a';
        } else {
            delta = 10 + s[i] - 'A';
        }        

        n = 16 * n + delta;
    }

    return n;
}

int getline_1(char line[], int maxline);
void copy(char to[], char from[]);

main() {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getline_1(line, MAXLINE)) > 0) {
        printf("%ld\n", htoi(line));
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

void copy(char to[], char from[]) {
    int i = 0;

    while((to[i] = from[i]) != '\0') {
        ++i;
    }
}