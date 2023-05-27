#include <stdio.h>

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 100;
    step = 20;

    printf("Celsius to Fahr\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = (celsius * 9.0 / 5.0) + 32.0;
        printf("%6.1f %3.0f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}
