#include "Header.h"
#include "Partie3.h"

auto main()-> int
{

	int choix{ 0 };
	cout << "\nBienvenue dans les exercices C++\n";

	cout << "\nExercices Partie 1:";
	cout << "\nPour le TP 1.1 - Nombre mystere tapez (1)";
	cout << "\nPour le TP 1.2 - 421 tapez (2)";
	cout << "\nPour le TP 1.3 - Jeu des allumettes tapez (3)";
	cout << "\nPour le TP 1.4 - Syracuse tapez (4)";
	cout << "\nPour le TP 1.5 - Integrale tapez (5)";
	cout << "\nPour le TP 1.6 - Fibonacci tapez (6)";
	cout << "\nPour le TP 1.7 - Developpement limites tapez (7)";
	cout << "\nPour le TP 1.8 - Maxfact tapez (8)\n";

	cout << "\nExercices Partie 2:";
	cout << "\nPour le TP 2.1a - Reference/Pointeur A tapez (9)";
	cout << "\nPour le TP 2.1b - Reference/Pointeur B tapez (10)";
	cout << "\nPour le TP 2.1c - Reference/Pointeur C tapez (11)";
	cout << "\nPour le TP 2.2 - Macro tapez (12)";
	cout << "\nPour le TP 2.3 - Personne tapez (13)\n";

	cout << "\nExercices Partie 3:";
	cout << "\nPour le TP 3.1 - Jeu de carte 1 tapez (14)";
	cout << "\nPour le TP 3.2 - Jeu de carte 2 tapez (15)";
	cout << "\nPour le TP 3.3 - Jeu de carte Monstre YUGIOH tapez (16)\n";

	cout << "\nPour Quitter tapez (0)\n";

	cout << "\nVeuillez choisir un TP: ";
	cin >> choix;
	
	switch (choix)
	{
		default: main(); break;

		case 0: break; // Quitter

		case 1: restart("NombreMystere"); break; // TP 1.1

		case 2: restart("Jeu421"); break; // TP 1.2

		case 3: restart("JeuDesAllumettes"); break; // TP 1.3

		case 4: restart("Syracuse"); break; // TP 1.4

		case 5: restart("Integrale"); break; // TP 1.5

		case 6: restart("Fibonacci"); break; // TP 1.6

		case 7: restart("DeveloppementLimites"); break; // TP 1.7

		case 8: restart("Maxfact"); break; // TP 1.8

		case 9: restart("ReferencePointeurA"); break; // TP 2.1a

		case 10: restart("ReferencePointeurB"); break; // TP 2.1b

		case 11: restart("ReferencePointeurC"); break; // TP 2.1c

		case 12: restart("Macro"); break; // TP 2.2

		case 13: restart("Personne"); break; // TP 2.3
		
		case 14: restart("JeuDeCarte1"); break; // TP 3.1

		case 15: restart("JeuDeCarte2"); break; // TP 3.2

		case 16: restart("CarteMonstreYUGIOH"); break; // TP 3.3

	}
	return 0;
}