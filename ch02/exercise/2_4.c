#include <stdio.h>
#define MAXLINE 100


int f1(char c, char s[]) {
    int i;
    int result = 0;
    for(i = 0; s[i] != '\0'; i++ ) {
        if (s[i] == c) {
            result = 1;
            break;
        }
    }
    return result;

}

void squeeze(char s1[], char s2[]) {
    int i, j;

    for(i = j = 0; s1[i] != '\0'; i ++) {
        if ( f1(s1[i], s2) == 0) {
            s1[j++] = s1[i];
        }
    }

    s1[j] = '\0';
}

int getline_1(char line[], int maxline);
void copy(char to[], char from[]);

main() {
    int len;
    char s1[MAXLINE];
    char s2[MAXLINE];

    while ((len = getline_1(s1, MAXLINE)) > 0) {
        getline_1(s2, MAXLINE);
        squeeze(s1, s2);
        printf("%s\n",s1);
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
