void ecrasseEcran()
{
    // fonction qui permet de nettoyer l'ecran
    system("cls");
}
void couleurTexte(int couleur)
{
    // fonction qui permet de colorier le texte
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), couleur);
}
