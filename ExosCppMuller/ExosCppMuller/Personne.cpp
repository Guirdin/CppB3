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
	Personne pp = { 10,"Paul",Masculin };
}

void afficher(const Personne& pp) {
	cout << "La Personne à pour numéro [" << pp.numero << "]";
	cout << "La Personne se nomme [" << pp.nom << "]";
	cout << "La Personne est de sexe [" << pp.sexe << "]";
}

void detruire(const Personne* pp) {
	//test dd
	delete pp;
	pp = nullptr;
}

void F_Personne() {
	cout << "\nBienvenue sur le TP 2.2 - Personne\n";

	Personne* pp1 = creer();
	initialiser(*pp1);
	afficher(*pp1);
	detruire(pp1);
}