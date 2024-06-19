#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <unistd.h>
#include <windows.h>
#include "CentreTexte.h"
#include "deroulement.h"
#include "aide.h"
#include "config.h"
#include "ecran.h"
void genererMots(char *mots[], int nombre)
{
    int i = 0;
    srand(time(NULL)); // initialisation de l'index qui genere le mots
    for(i = (nombre-1); i > 0; i--)
    {
        int t = rand() % (i + 1);
        char *temps = mots[i];
        mots[i] = mots[t];
        mots[t] = temps;
    }
}

    // la fonction qui enregistre les identite de joueur
void identite(char *nom1, char *nom2)
{
    nom1[20];
    nom2[20];
    // on demande le nom du premier joueur
    printf("\t\t\tDonner le nom du premier joueur : ");
    scanf("%s", nom1);
     // on demande le nom du deuxieme joueur
    printf("\t\t\tDonner le nom du deuxieme joueur : ");
    scanf("%s", nom2);

    printf("\t\t\t\t\t%s VS %s\n\n", nom1, nom2);
    return (nom1, nom2);

}
// la fonction qui permet au joueur de s'affonter


int main()
{
    FILE *fichier = fopen("fichier.txt", "a");
    int largeur_ecran = 160;
    int largeur_menbre = 160;
    char msg[] = "===UDBL-DACTYLOGICIEL===";
    couleurTexte(10);
    centreTexte(msg, largeur_ecran);
    ecrasseEcran();

    char membre[] = "\t\t\t\t\t\t\tMUKEBO ILUNGA GIFT\n\t\t\t\t\t\t\t\t\tMUSEKA KASUBA GABRIEL\n\t\t\t\t\t\t\t\t\tMUKAZO MAZANGA DON\n\t\t\t\t\t\t\t\t\tMUTWALE ILUNGA ADORA";
    centreTexte(membre, largeur_menbre);
    ecrasseEcran();


    int choixPrincipal = 0;
    // menu principal du jeu dactylogiciel
    centreTexte("=====MENU PRINCIPAL=====\n\n", largeur_ecran);
    printf("\t1. Demarrage\n", largeur_ecran);
    printf("\t\t\t\t\t\t\t\t\t2. Configuration\n");
    printf("\t\t\t\t\t\t\t\t\t3. Aide\n");
    printf("\t\t\t\t\t\t\t\t\t0. Quitter\n");


    printf("\t\t\t\t\t\t\t\t\tDonner votre choix : ");
    scanf("%d", &choixPrincipal);
    ecrasseEcran();
    switch(choixPrincipal)
    {
    case 1:
        {
            centreTexte("Demarrage en cours...", largeur_ecran);
            ecrasseEcran();
        }
        break;
    case 2:
        {
            printf("- Configuration\n");
        }
        break;
    case 3:
        {
            printf("- Aide\n");
        }
        break;
    default:
        {
            return 0;
        }
        break;
    }
    if(choixPrincipal == 1)
    {
        jouerJeu();
    }
    else if(choixPrincipal == 2)
    {
        ajoutMot(fichier);
    }
    else if(choixPrincipal == 3)
    {
        Aide();
    }
    else
    {
        return 1;
    }


    return 0;
}
