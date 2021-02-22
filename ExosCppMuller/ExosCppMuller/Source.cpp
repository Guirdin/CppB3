#include "Header.h"

const double pi = std::acos(-1);

map<string, function<void() >> funcs = {
    { "NombreMystere", NombreMystere },
    { "Jeu421", Jeu421 },
    { "JeuDesAllumettes", JeuDesAllumettes },
    { "Syracuse", Syracuse },
    { "Integrale", Integrale },
    { "Fibonacci", Fibonacci },
    { "DeveloppementLimites", DeveloppementLimites },
    { "Maxfact", Maxfact },
    { "ReferencePointeurA", C_2_6a },
    { "ReferencePointeurB", C_2_6b },
    { "ReferencePointeurC", C_2_6c },
    //{ "Macro", Macro },
    //{ "Personne", Personne },
};

auto restart(string fonction) -> void {
    string choix;

    do {
        funcs[fonction]();
        cout << "\n\nVoulez vous recommencer [o,O/N,n]: ";
        cin >> choix;
    } while (choix != "N" && choix != "n");
    cout << endl;
    main();
}

auto random(int min, int max) -> int 
{
    int x = (min) + (int)(rand() % (max - (min) + 1));
    srand(time(NULL) + 100 * static_cast<long long>(x)); // Met l'horloge à null et ajout d'un mutiplicateur aléatoire, évitant l'obtention des mêmes résultat
    x = (min)+(int)(rand() % (max - (min)+1));
    return  x; // Génère un nombre aléatoire pour notre variable prise en paramètre
}

// JEU421
    auto jet_de(vector<int>& de_lance, int nb_de) -> void // lance un dés de 6 face et récupère la valeur
    {
        for (int i{ 0 }; i < nb_de; i++)
        {
            de_lance[i] = random(1, 6);
        }
    }

    auto jouer() -> void // Permet de forcer l'utilisateur à faire une action pour jetté les dés
    {
        int choix{ 0 }; // initialisation d'une variable choix

        while (choix != 1) // Tant que choix n'est pas égale à 1, répéte le bloc
        {
            cout << "\nPour lancer les des tapez (1): ";
            cin >> choix; // stock la valeur saisie par l'utilisateur dans choix
        }
    }

    auto verif_chiffres(int& de_restant, vector<int>& de_lance, vector<int>& main) -> void
    {
        for (int i{ 0 }; i < 3; i++)
        {
            if (de_lance[i] == 4 && main[0] != 4) // Si le chiffre est déjà dans la main la conditions n'est pas faite
            {
                main[0] = de_lance[i];
                de_restant--;
            }

            if (de_lance[i] == 2 && main[1] != 2)
            {
                main[1] = de_lance[i];
                de_restant--;
            }

            if (de_lance[i] == 1 && main[2] != 1)
            {
                main[2] = de_lance[i];
                de_restant--;
            }
        }
        cout << "\nVotre Main = [" << main[0] << "," << main[1] << "," << main[2] << "]\n"; // Affiche la main
    }

    auto affiche_des(int de_restant, vector<int> de_lance, int essai_restant) -> void
    {
        cout << "\nEssai restant " << essai_restant << ":";

        for (int i{ 0 }; i < de_restant; i++)
        {
            cout << "\nLe De " << i + 1 << " affiche: " << de_lance[i];

        }
    }

// JEU421

// JeuDesAllumettes
    auto TourDeJeu(int nb_tour) -> int // Utilisation d'un compteur qui est paire ou impaire afin de changer de joueur;
    {
        int joueur;
        if (nb_tour % 2 == 0) {
            joueur = 2;
        }
        else {
            joueur = 1;
        }
        return joueur;
    }

    auto AfficherAllumettes(int Allumettes) -> void {  // Affichage des allumettes avec une boucle
        for (int i = 1; i < Allumettes; i++) {
            cout << " | ";
        }
        cout << " | " << Allumettes;
    }

    auto RetirerAllumettes(int Allumettes) -> int // Nombre d'allumette retirable celon des conditions
    {
        int Choix{ 0 };
        if (Allumettes > 2)
        {
            do {
                cout << "\nCombien d'allumettes voulez vous retirer 1, 2 ou 3: ";
                cin >> Choix;
            } while (Choix != 1 && Choix != 2 && Choix != 3);

        }
        if (Allumettes == 2)
        {
            do {
                cout << "\nCombien d'allumettes voulez vous retirer 1 ou 2: ";
                cin >> Choix;
            } while (Choix != 1 && Choix != 2);
        }
        if (Allumettes == 1)
        {
            do {
                cout << "\nVous ne pouvez retirer qu'1 allumettes: ";
                cin >> Choix;
            } while (Choix != 1);
        }
        return Choix;
    }
// JeuDesAllumettes