#include "Header.h"

void JeuDesAllumettes()
{
    cout << "Bienvenue sur le TP 1.3 - Jeu des allumettes\n";

    // Initialisation variable
    int Allumettes, nb_tour{ 0 }, Joueur{ 0 }, Choix;

    do {
        cout << "Avec combien d'Allumettes souhaitez vous jouer (min 6): ";
        cin >> Allumettes;
    } while (Allumettes < 6);
    
    Affiche_Allumettes(Allumettes);

    while (Allumettes != 0) { // Permet de relancer le jeu tant qu'il reste plus d'une allumettes
        nb_tour++;
        Joueur = Tour_De_Jeu(nb_tour);
        cout << "\nJoueur " << Joueur << " a vous de jouer\n";
        Choix = Retirer_Allumettes(Allumettes);

        switch (Choix) { // Permet de décrémenter le nombre d'allumettes selons le choix utilisateur
        case 1:
            Allumettes--;
            Affiche_Allumettes(Allumettes);
            break;

        case 2:

            Allumettes -= 2;
            Affiche_Allumettes(Allumettes);

            break;

        case 3:

            Allumettes -= 3;
            Affiche_Allumettes(Allumettes);

            break;
        }
    }
    nb_tour++;
    cout << "\nLa partie a durer " << nb_tour << " tours et le joueur " << Joueur << " a perdu !!";
}