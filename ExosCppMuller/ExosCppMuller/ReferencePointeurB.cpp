#include "Header.h"
#include <iostream>

typedef double* ptrDouble;
using ptrDouble = double*;

void constructeur(ptrDouble& dd, const unsigned& taille) 
{
	// Teste taille > 0
	dd = new double[taille] {0}; 
	// test dd
}

void afficher(const ptrDouble& dd, const unsigned& taille){
	if (dd != nullptr) {
		for (unsigned i = 0; i < taille; ++i)
			cout << "tab[" << i << "]=" << dd[i] << endl;
	}
}

void modifier(ptrDouble const & dd, const unsigned& taille,
				const unsigned& index, const double& valeur){
	if (index >= taille) throw (string("Erreur 001"));
	// test dd
	dd[index] = valeur;
}

void destructeur(ptrDouble& dd) {
	//test dd
	delete [] dd;
	dd = nullptr;
}

const double& get(const ptrDouble& dd, const unsigned& taille, const unsigned& index) {
	return dd[index];
}

double& get(ptrDouble& dd, const unsigned& taille, const unsigned& index) {
	return dd[index];
}

void C_2_6b() {
	cout << "\nBienvenue sur le TP 2.1b - Reference/Pointeur\n";

	ptrDouble d1 = nullptr;
	unsigned t1 = 5;
	constructeur(d1, t1);
	afficher(d1, t1);
	modifier(d1, t1, 2, 3.13589985);
	afficher(d1, t1);
	std::cout << get(d1, t1, 2) << std::endl;
	get(d1, t1, 2) = 62.1;
	std::cout << get(d1, t1, 2) << std::endl;
	afficher(d1, t1);
	destructeur(d1);
	afficher(d1, t1);
}