#include <stdio.h>

#define IN 1
#define OUT 0

main() {
    int c, state;
    int length_to_freq[10];
    int i;

    for(i = 0; i < 10; i ++) {
        length_to_freq[i] = 0;
    }

    state = OUT;
    int curr_len = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                if (curr_len < 9) {
                    length_to_freq[curr_len]++;
                } else {
                    length_to_freq[9]++;
                }
            }
            state = OUT;
        } else {
            if (state == OUT) {
                state = IN;
                curr_len = 1;
            } else {
                curr_len++;
            }
        }
    }

    for(i = 0; i < 10; i ++){
        printf("%d: ", i);
        for(int j = 0; j < length_to_freq[i]; j++) {
            printf("+");
        }
        printf("\n");
    }

}