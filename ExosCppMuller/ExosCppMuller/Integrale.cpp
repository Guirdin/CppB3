#include "Header.h"

void Integrale()
{
	cout << "Bienvenue sur le TP 1.5 - Integrale\n";

	float a, p, resultat;
	int b;

	cout << "\nVeuillez saisir la valeur a : ";
	cin >> a;

	cout << "\nVeuillez saisir la valeur b : ";
	cin >> b;

	cout << "\nVeuillez saisir la valeur p : ";
	cin >> p;

	p = (b - a) / p;

	vector<float> tableauRectangles;
	ostream_iterator<float> output(cout, "");

	while (a < b) 
	{
		resultat = pow(a, 2) * p;
		tableauRectangles.insert(tableauRectangles.end(), resultat);
		a += p;
	}

	cout << endl;
	cout << "\nLa somme des elements= " << accumulate(tableauRectangles.begin(), tableauRectangles.end(), 0.0);
}