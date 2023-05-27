#include <stdio.h>

#define IN 1
#define OUT 0

main() {
    int c, state;
    int char_to_freq[26];
    int i;

    for(i = 0; i < 26; i ++) {
        char_to_freq[i] = 0;
    }

    state = OUT;

    while ((c = getchar()) != EOF)
    {
        if (c >= 'a' && c <= 'z') {
            ++char_to_freq[c - 'a'];
        }
        if (c >= 'A' && c <= 'Z') {
            ++char_to_freq[c - 'A'];
        }
    }

    for(i = 0; i < 26; i ++){
        printf("%d: ", i);
        for(int j = 0; j < char_to_freq[i]; j++) {
            printf("+");
        }
        printf("\n");
    }

}