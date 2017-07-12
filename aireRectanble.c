#include <stdio.h>
#include <stdlib.h>

double aireRectangle(double largeur, double hauteur);

int main(int argc, char *argv[]){
    aireRectangle(5, 10);
    aireRectangle(2.5, 3.5);
    aireRectangle(4.2, 9.7);
    return 0;
}

double aireRectangle(double largeur, double hauteur){
    double aire = 0;
    aire = largeur * hauteur;
    printf("Rectangle de largeur %f et hauteur %f. Aire = %f\n", largeur, hauteur, aire);

    return aire;
}
