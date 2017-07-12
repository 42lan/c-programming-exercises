#include <stdio.h>
#include <stdlib.h>

int triple(int nombre){
    return 3 * nombre;
}
int plusun(int nombre){
    return nombre + 1;
}
int moinsun(int nombre){
    return nombre - 1;
}
/*
int addition(int a, int b){
    return a + b;
}
int soustraction(int a, int b){
    return a - b;
}
int multipliaction(int a, int b){
    return a * b;
}
float division(int a, int b){
    return a / b;
}
void bonjour(){
    printf("Bonjour\n");
}
*/

int main(int argc, char *argv[]){
    int nombreEntre = 0;

    printf("Entrez un nombre...");
    scanf("%d", &nombreEntre);
    printf("Le triple de ce nombre +1 puis -1 est %d\n", triple(plusun(moinsun(nombreEntre))));

/*
    int a = 14, b = 5;
    printf("3*(%d) = %d\n", a, triple(a));
    printf("%d + %d = %d\n", a, b, addition(a, b));
    printf("%d - %d = %d\n", a, b, soustraction(a, b));
    printf("%d * %d = %d\n", a, b, multipliaction(a, b));
    printf("%d / %d = %.2f\n", a, b, division(a, b));
    bonjour();
*/
    return 0;
}
