#include "Header.h"
#include <iostream>

enum Sexe { Inconnue=0, Masculin=1, Feminin=2};

struct Personne
{
	int numero;
	char nom[10];
	Sexe sexe;
};

Personne* creer()
{
	return new Personne ;
}

void initialiser(Personne& pp){
	pp = { 10,"Paul",Masculin };
}

void afficher(const Personne& pp) {
	cout << "\nLa Personne a pour numero [" << pp.numero << "]";
	cout << "\nLa Personne se nomme [" << pp.nom << "]";
	cout << "\nLa Personne est de sexe [" << pp.sexe << "]";
}

void detruire(const Personne* pp) {
	//test dd
	delete pp;
	pp = nullptr;
}

void F_Personne() {
	cout << "\nBienvenue sur le TP 2.3 - Personne\n";

	Personne* pp1 = creer();
	initialiser(*pp1);
	afficher(*pp1);
	detruire(pp1);
}