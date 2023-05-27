#include <stdio.h>

void squeeze(char s[], int c) {
    int i, j;

    for(i = j = 0; s[i] != '\0'; i ++) {
        if (s[i] != c) {
            s[j++] = s[i];
        }
    }

    s[j] = '\0';
}

void stracat(char s[], char t[]) {
    int i, j;

    for(i = 0; s[i] != '\0'; i++)
        ;
    
    for(j = 0; t[j] != '\0'; j++) {
        s[i++] = t[j];
    }

}