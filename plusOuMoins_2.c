#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int choixMode(){
    int mode = 0;
    printf("Quelle mode tu choisi?\n1: Seule\n2: Avec un ami\n");
    printf("> ");
    scanf("%d", &mode);
    return mode;
}

int main(int argc, char *argv[]){
    system("clear");    //Pour effacer l'écran du terminal
    int nombreMystere = 0, nombreEntre = 0, continuerPartie = 1;
    int niveau = 1, compteur;
    int MIN = 0, MAX = 0;

    do{
        system("clear");
        switch(choixMode()){
            case 1:
                printf("\nQuelle niveau veux tu joue?\n1 = entre 1 et 100\n2 = entre 1 et 1000\n3 = entre 1 et 10000\n");
                printf("> ");
                scanf("%d", &niveau);
                switch(niveau){
                    case 1:     MAX = 100;      break;
                    case 2:     MAX = 1000;     break;
                    case 3:     MAX = 10000;    break;
                    default:                 return 1;
                }
                srand(time(NULL));
                nombreMystere = (rand() % (MAX - MIN +1)) + MIN;
                break;
            case 2:
                printf("Joueur 1, saissi le nombre mystère\n");
                printf("> ");
                scanf("%d", &nombreMystere);
                break;
            default:
                return 2;
        }

        system("clear");
        compteur = 0;
        do{
            compteur++;
            printf("Quel est le nombre mystere?\n");
            printf("> ");
            scanf("%d", &nombreEntre);

            if(nombreEntre < nombreMystere)
                printf("C'est plus grand\n\n");
            else if(nombreEntre > nombreMystere)
                printf("C'est plus petit\n\n");
            else
                printf("Exactemen! Tu l'as trouvé en %d coups!!!\n\n", compteur);
        } while(nombreEntre != nombreMystere);

        printf("Tu veux rejouer?\n[0=non] [1=oui]\n");
        printf("> ");
        scanf("%d", &continuerPartie);

    } while(continuerPartie);

    return 0;
}

/*
return 1 - choix d'un niveau qui n'existe pas
return 2 - choi de mode jeu qui n'existe pas
*/
