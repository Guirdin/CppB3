#include "Header.h"

void Integrale()
{
	cout << "\nBienvenue sur le TP 1.5 - Integrale\n";
	cout << "\nRegles: calcule de l integrale par la methode des rectangles avec x[a, b] et un pas p\n";

	double a, p, resultat;
	int b;

	cout << "\nVeuillez saisir la valeur de a : ";
	cin >> a;

	cout << "\nVeuillez saisir la valeur de b : ";
	cin >> b;

	cout << "\nVeuillez saisir la valeur de p : ";
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

	cout << "\nLa somme des elements= " << accumulate(tableauRectangles.begin(), tableauRectangles.end(), 0.0);
}