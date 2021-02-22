#include "Header.h"

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
	//cout << "\nPour le TP 2.1a - Référence/Pointeur tapez (9)\n";
	cout << "\nPour le TP 2.1b - Reference/Pointeur tapez (10)";
	cout << "\nPour le TP 2.1c - Reference/Pointeur intelligent tapez (11)\n";

	cout << "\nVeuillez choisir un TP: ";
	cin >> choix;
	
	switch (choix)
	{
		default: main(); break;

		case 1: restart("NombreMystere"); break; // TP 1.1

		case 2: restart("Jeu421"); break; // TP 1.2

		case 3: restart("JeuDesAllumettes"); break; // TP 1.3

		case 4: restart("Syracuse"); break; // TP 1.4

		case 5: restart("Integrale"); break; // TP 1.5

		case 6: restart("Fibonacci"); break; // TP 1.6

		case 7: restart("DeveloppementLimites"); break; // TP 1.7

		case 8: restart("Maxfact"); break; // TP 1.8

		//case 9: restart("ReferencePointeurA"); break; // TP 2.1a

		case 10: restart("ReferencePointeurB"); break; // TP 2.1b

		case 11: restart("ReferencePointeurC"); break; // TP 2.1c

	}

	return 0;
}