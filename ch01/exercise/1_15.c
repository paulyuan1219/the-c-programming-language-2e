#include <stdio.h>

float f1(int fahr);

main(){
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, f1(fahr));
}   

float f1(int fahr) {
    return (5.0 / 9.0) * (fahr - 32);
}