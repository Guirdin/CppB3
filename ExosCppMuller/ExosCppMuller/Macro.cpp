#include "Header.h"
#include <iostream>

#define MAX(a,b) ((a)>(b)?(a):(b))

#define ASSERT(cond) if( (cond) )\
(cout << "\nErreur ligne (" << __LINE__ << ") dans le fichier \"" << __FILE__ << "\"\n"\
<< "Explications: les deux valeurs sont identique \n")

void Macro()
{
	cout << "\nBienvenue sur le TP 2.2 - Macro\n";
	cout << "\nRegles: calcule de le maximum de deux valeur [a, b]\n";
	cout << "\nSi les deux valeurs sont identique la Macro d'erreur s'activera\n";

	int a, b;

	cout << "\nVeuillez saisir la valeur de a: ";
	cin >> a;
	cout << "\nVeuillez saisir la valeur de b: ";
	cin >> b;

	int max = MAX(a, b);
	cout << "\nLe maximum de [" << a << ", " << b << "] est " << max << endl;

	ASSERT(a == b);
}