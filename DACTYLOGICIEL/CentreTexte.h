void centreTexte(char *texte, int largeur_ecran)
{
    // la fonction qui nous permet de centre le texte d'acceuil
    int espace_gauche, espace_droite;
    espace_gauche = (largeur_ecran - strlen(texte)) / 2;
    espace_droite = largeur_ecran - espace_gauche - strlen(texte);
    for(int i = 0; i < espace_gauche; i++)
    {
        printf(" ");
    }
    printf("%s", texte);

    for(int i = 0; i < espace_droite; i++)
    {
        printf(" ");
    }
    // cette boucle tourne 5 fois a chaque tour on fait retarder le code pendent une seconde
    for(int i = 0; i < 5; i++)
    {
        sleep(1);
    }

}
