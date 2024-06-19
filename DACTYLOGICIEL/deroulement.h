void jouerJeu()
{
    char *joueur1[20];
    char *joueur2[20];

    identite(joueur1, joueur2);

    int nombreMots = 0;

    printf("\t\t\tentre le nombre de mots a saisir : ");
    // demande a l'utilisateur de donner le nombre de que le deux deux joueur vont saisir
    scanf("%d", &nombreMots);
    clock_t debut, fin;
    //initialisation du temps du premier joueur
    double tempsJoueur1 = 0;
     //initialisation du temps du deuxieme joueur
    double tempsJoueur2 = 0;
    int i = 0;

    char *mots[] = {"langage", "niveau", "logiciel", "clavier", "programmation", "piratage", "reseau", "design", "informatique","dactylo"};

    genererMots(mots, 10);
    debut = clock();
    // debut du temps de saisi
    for(i = 0; i < nombreMots; i++)
    {
        char motAsaisir[50];
        // le joueur1 saisi le mot afficher
        printf("\t\t\t%s saisi le mot suivant : %s\n",joueur1, mots[i]);
        scanf("%s", motAsaisir);

        while(strcmp(motAsaisir, mots[i]) != 0)
        {
            // tant que le mots ne pas correcte le joueur recommence
            printf("\t\t\tce pas le bon mot. veillee reessayez : ");
            scanf("%s", motAsaisir);
        }
    }
    fin = clock();
    tempsJoueur1 = ((double)(fin - debut)) / CLOCKS_PER_SEC;
    // on affiche le temps du saisi du premier joueur
    printf("Temps de saisi pour le premier joueur : %f secondes\n", tempsJoueur1);

    debut = clock();
    for(i = 0; i < nombreMots; i++)
    {
        char motAsaisi[50];
        printf("\t\t\t%s saisi le mot suivant : %s\n", joueur2, mots[i]);
        scanf("%s", motAsaisi);
        while(strcmp(motAsaisi, mots[i]) != 0)
        {
            printf("\t\t\tce ne pas le bon mot. veillee reessayer : ");
            scanf("%s", motAsaisi);
        }
    }
    fin = clock();
    tempsJoueur2 = ((double)(fin - debut)) / CLOCKS_PER_SEC;


    printf("Temps de saisi pour le deuxieme joueur : %f secondes\n\n\n", tempsJoueur2);

    // comparaisont du plus rapide au clavier
    if(tempsJoueur1 > tempsJoueur2)
    {
        couleurTexte(500);
        printf("%s est plus rapide au clavier\n\n", joueur2);
    }
    else if(tempsJoueur1 < tempsJoueur2)
    {
        couleurTexte(500);
        printf("%s est plus rapide au clavier\n\n", joueur1);
    }
    else
    {
        couleurTexte(500);
        printf("%s et %s ont la meme vitesse au clavier\n\n", joueur1, joueur2);
    }
    couleurTexte(10);

}
