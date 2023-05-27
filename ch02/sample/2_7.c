#include <stdio.h>

int atoi(char s[]) {
    int i, n;
    n = 0;
    for(i = 0; s[i] >= '0' && s[i] <= '9', i++) {
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

unsigned long int next = 1;

int rand(void) {
    next = next * 1103515245 + 12345;
    return (unsigned int) (next / 65536) % 32768;
}

void srand(unsigned int seed) {
    next = seed;
}