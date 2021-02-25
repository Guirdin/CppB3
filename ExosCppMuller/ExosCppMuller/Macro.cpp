#include "Header.h"
#include <iostream>

#define MAX(a,b) ((a)>(b)?(a):(b))

void Macro()
{
	cout << "\nBienvenue sur le TP 2.2 - Macro\n";
	cout << "\nRegles: calcule de le maximum de deux valeur [a, b]\n";

	int a, b;

	cout << "\nVeuillez saisir la valeur de a: ";
	cin >> a;
	cout << "\nVeuillez saisir la valeur de b: ";
	cin >> b;

	int max = MAX(a, b);
	cout << "\nLe maximum de " << a << " et " << b << " est " << max;
}