#include "Header.h"


void Jeu421()
{
    cout << "Bienvenue sur le TP 1.2 - Jeu du 421\n";

    vector<int> main(3, 0); // Créer un tableau de 3 case toutes égale à 0
    vector<int> de_lance(3, 0); // Créer un tableau de 3 case toutes égale à 0

    int nb_de{ 3 }, nb_coup{ 3 };

    cout << "Bienvenue sur le jeu ";

    while (nb_coup != 0) // Tant que le nombre de coup/essais n'est pas égale à 0, le bloc est relancer
    {
        jouer();

        jet_de(de_lance);

        affiche_des(nb_de, de_lance, nb_coup);

        verif_chiffres(nb_de, de_lance, main);

        nb_coup--;
    }

    if (main[0] == 4 && main[1] == 2 && main[2] == 1)
    {
        cout << "\n\n[" << main[0] << "," << main[1] << "," << main[2] << "] Vous avez Gagne!!\n\n";
    }
    else
    {
        cout << "\n\n[" << main[0] << "," << main[1] << "," << main[2] << "] Vous avez perdu!!\n\n";
    }
}
