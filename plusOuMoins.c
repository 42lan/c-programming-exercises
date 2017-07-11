#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
    system("clear");    // Pour effacer l'écran du terminal de tout ce qui precede le lancement du joue
    int nombreMystere = 0, nombreEntre = 0, continuerPartie = 1;
    int mode = 1, niveau = 1, compteur;
    int MIN = 0, MAX = 0;   // Les variables pour chargé le niveau

    printf("Quelle mode tu choisi?\n1: seule, 2: avec ami\n");
    scanf("%d", &mode); // On recupere la saissi d'utilisateur

    switch(mode){
        case 1: // Partie a seule
            srand(time(NULL));  // Initialisation ue générateur de nombres aléatoires
            while(continuerPartie){ // Tant que l'utilisateur ne change pas la variable on joue-rejoue
                system("clear");
                printf("Quelle niveau veux tu joue?\n1 = entre 1 et 100\n2 = entre 1 et 1000\n3 = entre 1 et 10000\n");
                scanf("%d", &niveau);   // On récupere le niveau auquels l'utilisateur veut faire face

                switch (niveau) {   // On fonction du niveau choisi on affecte la difficulté à la variable MAX
                                    // S'il choisi autre que 2 ou 3, on affecte 100 a la variable MAX
                    case 2:     MAX = 1000;     break;
                    case 3:     MAX = 10000;    break;
                    default:    MAX = 100;      break;
                }

                nombreMystere = (rand() % (MAX - MIN +1)) + MIN;    // Formule qui génere le nombre aléa en fonction du niveau choise (en focntion de MAX)
                compteur = 0;   // On initialise le compteur à 0 à chaque debut de la partie
                do{
                    compteur++; // Le compteur s'incremte de un en un a chaque repassage dans la boucle en fonction de la condition dans while()
                    printf("Quelle est le nombre? \n"); // On demande le nombre que le jouer pense
                    scanf("%d", &nombreEntre);  // On recupere le nombre qui pretend etre le nombre mystere
                    system("clear");    // Avant afficher si le nombre est supperieur ou inferieur on efface l'ecran de terminal pour etre propre
                    if(nombreEntre < nombreMystere) // Si le nombre entré est inferieur au nombre mystere on affiche le message approprié
                        printf("C'est plus\n");
                    else if(nombreEntre > nombreMystere)     // Sinon si le nombre entré est supperieur au nombre mystere on affiche le message approprié
                        printf("C'est moins\n");
                    else{   // Si les deux conditions precedentes sont fauses donc l'utilisateur a touver le nombre et on afficher le message avec le nombre des coups
                        printf("Ouiii! Le nombre mystere est %d\n", nombreMystere);
                        printf("Tu as gagné en %d coups\n", compteur);
                    }
                }while(nombreEntre != nombreMystere);   // On repete la boucle de jeu tant que le nombre entre n'est pas égale au nombre mystere

                printf("Veux-tu faire une autre partie? [0/1] ");   // Quand on est sortie de la boucle, on demande a l'utilisateur si il veut rejouer
                scanf("%d", &continuerPartie);  // On recupere sa reponse 0=non, 1=oui. Si 1, alors la boucle while(continuerPartie) reste vrai et on recommence
            }
            break;
        case 2: // Partie a deux
            while(continuerPartie){
                system("clear");
                printf("Joueur 1: Entre le nombre mystere: ");   // On demande au jouer 1 de rentre le nombre mystere
                scanf("%d", &nombreMystere);    // On recupere le nombre et le stockent dans la variable nombreMystere
                system("clear");

                compteur = 0;   // On initialise le compteur à 0 à chaque debut de la partie
                do{
                    compteur++;
                    printf("Joueur 2: Quelle est le nombre? \n"); // On demande le nombre que le jouer 2 pense
                    scanf("%d", &nombreEntre);  // On recupere le nombre qui pretend etre le nombre mystere
                    system("clear");

                    if(nombreEntre < nombreMystere) // Si le nombre entré est inferieur au nombre mystere on affiche le message approprié
                        printf("C'est plus\n");
                    else if(nombreEntre > nombreMystere)    // Sinon si le nombre entré est supperieur au nombre mystere on affiche le message approprié
                        printf("C'est moins\n");
                    else{   // Si les deux conditions precedentes sont fauses donc l'utilisateur a touver le nombre et on afficher le message avec le nombre des coups
                        printf("Ouiii! Le nombre mystere est %d\n", nombreMystere);
                        printf("Tu as gagné en %d coups\n", compteur);
                    }
                }while(nombreEntre != nombreMystere);   // On repete la boucle de jeu tant que le nombre entre n'est pas égale au nombre mystere

                printf("Veux-tu faire une autre partie? [0/1] ");   // Quand on est sortie de la boucle, on demande a l'utilisateur si il veut rejouer
                scanf("%d", &continuerPartie);  // On recupere sa reponse 0=non, 1=oui. Si 1, alors la boucle while(continuerPartie) reste vrai et on recommence
            }
            break;
        default: return 1;  // Si l'utilisateur choisi un autre mode que 1 ou 2, alors on sort de switch et terminent le programme en renvoyand le code 1
    }

    return 0;
}
