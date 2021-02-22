#include "Header.h"
#include <iostream>

enum Sexe { Inconnue=0, Masculin=1, Feminin=2};

struct Personne
{
	int numero;
	char nom[10];
	Sexe sexe;
};