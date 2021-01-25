#include "Header.h"


auto main()-> int
{
	int choix{ 0 };
	cout << "\nBienvenue dans les exercices C++\n";

	cout << "\nPour le TP 1.1 - Nombre mystere tapez (1)";
	cout << "\nPour le TP 1.2 - 421 tapez (2)";
	cout << "\nPour le TP 1.3 - Jeu des allumettes tapez (3)";
	cout << "\nPour le TP 1.4 - Syracuse tapez (4)";
	cout << "\nPour le TP 1.5 - Integrale tapez (5)";
	cout << "\nPour le TP 1.6 - Fibonacci tapez (6)";
	cout << "\nPour le TP 1.7 - Developpement limites tapez (7)";
	cout << "\nPour le TP 1.8 - Maxfact tapez (8)\n";

	cout << "\nVeuillez choisir un TP: ";
	cin >> choix;

	switch (choix)
	{
	default:
		main();
		break;

	case 1:
		restart("NombreMystere"); // TP 1.1
		break;

	case 2:
		restart("Jeu421"); // TP 1.2
		break;

	case 3:
		restart("JeuDesAllumettes"); // TP 1.3
		break;

	case 4:
		restart("Syracuse"); // TP 1.4
		break;

	case 5:
		restart("Integrale"); // TP 1.5
		break;

	case 6:
		restart("Fibonacci"); // TP 1.6
		break;

	case 7:
		restart("DeveloppementLimites"); // TP 1.7
		break;

	case 8:
		restart("Maxfact"); // TP 1.8
		break;
	}

	return 0;
}