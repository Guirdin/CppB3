#include "Header.h"

void JeuDesAllumettes()
{
    // Initialisation variable
    int allumettes, nb_tour{ 0 }, joueur{ 0 }, choix;
    cout << "\nBienvenue sur le TP 1.3 - Jeu des allumettes\n";

    cout << "\nRegle : il y a plusieurs allumettes, on en retire 1, 2 ou 3 et celui qui prend la dernière a perdu.\n";
    cout << "Avec combien d'allumettes souhaitez vous jouer (conseil min 6): ";
    cin >> allumettes;
    
    AfficherAllumettes(allumettes);

    while (allumettes != 0) { // Permet de relancer le jeu tant qu'il reste plus d'une allumettes
        nb_tour++;
        joueur = TourDeJeu(nb_tour);
        cout << "\n\nJoueur " << joueur << " a vous de jouer";
        choix = RetirerAllumettes(allumettes);

        switch (choix) { // Permet de décrémenter le nombre d'allumettes selons le choix utilisateur
        case 1:
            allumettes--;
            AfficherAllumettes(allumettes);
            break;

        case 2:
            allumettes -= 2;
            AfficherAllumettes(allumettes);
            break;

        case 3:
            allumettes -= 3;
            AfficherAllumettes(allumettes);
            break;
        }
    }
    cout << "\n\nLa partie a durer " << nb_tour << " tours et le joueur " << joueur << " a perdu !!";
}