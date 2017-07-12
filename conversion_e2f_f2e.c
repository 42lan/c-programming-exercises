#include <stdio.h>
#include <stdlib.h>

double e2f(double euros){
    return 6.55957 * euros;;
}

double f2e(double francs){
    return francs / 6.55957;
}
int main(int argc, char *argv[]){
    printf("10€ = %fF\n", e2f(10));
    printf("50€ = %fF\n", e2f(50));
    printf("100€ = %fF\n", e2f(100));
    printf("200€ = %fF\n", e2f(200));

    printf("10F = %f€\n", f2e(10));
    printf("50F = %f€\n", f2e(50));
    printf("100F = %f€\n", f2e(100));
    printf("200F = %f€\n", f2e(200));

    return 0;
}
