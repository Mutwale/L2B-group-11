// Fonction pour ajouter un mot au dictionnaire
void ajoutMot(char *DictionnaireMots)
{
    int largeur = 160;
    printf("\t\t\t\t\t\t\t\t\t\t1. Oui\n");
    printf("\t\t\t\t\t\t\t\t\t\t2. Non\n");
    printf("\t\t\t\t\t\t\t\t\t\t0. Fermer le jeux\n\n");

    printf("\t\t\t\t\t\t\t\t\t\tVous voulez ajouter de mots ? : ");
    int reponse = 0;
    scanf("%d", &reponse);

    if(reponse == 1)
    {

        char mot[20];

        // Ouvrir le fichier de dictionnaire en mode ecriture
        FILE *file = fopen("dictionnaire.txt", "a");
        if (file == NULL)
        {
            printf("Erreur lors de l'ouverture du fichier de dictionnaire.\n");
            return;
        }

        // Demander le mot à ajouter
        printf("Entrez le mot a ajouter au dictionnaire: ");
        scanf("%s", mot);

        // Écrire le mot dans le fichier de dictionnaire
        fprintf(file, "%s\n", mot);
        printf("le mots a ete enregistre avec succes\n");

        fclose(file);

     }
     else if(reponse == 2)
     {
         main();
     }
     else if(reponse == 0)
     {
         return 1;
     }
}

