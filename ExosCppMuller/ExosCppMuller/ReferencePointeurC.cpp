#include "Header.h"
#include <iostream>
#include <memory>

using std::shared_ptr;
using std::default_delete;

typedef std::shared_ptr<double> ptrStdDouble;
using ptrDouble = shared_ptr<double>;

void constructeur(ptrDouble &dd, const unsigned & taille) {
	// Teste taille > 0
	// dd = new double [taille]{0.};
	dd.reset(new double[taille]{0.}, default_delete<double[]>());
	// test dd
}

void afficher(const ptrDouble& dd, const unsigned& taille) {
	if (dd != nullptr) {	
		for (unsigned i = 0; i < taille; ++i)
			cout << "tab[" << i << "]=" << dd.get()[i] << endl;
	}
}

void modifier(ptrDouble const& dd, const unsigned& taille,
	const unsigned& index, const double& valeur) {
	if (index >= taille) throw (string("Erreur 001"));
	// test dd
	dd.get()[index] = valeur;
}

void destructeur(ptrDouble& dd) {
	//test dd
	cout << "\nDestruction du pointeur\n";
	dd.reset();
}

const double& get(const ptrStdDouble& dd, const unsigned& taille, const unsigned& index){ 
	return dd.get()[index];
}

double& get(ptrStdDouble& dd, const unsigned& taille, const unsigned& index) {
	return dd.get()[index];
}

void C_2_6c() {
	cout << "\nBienvenue sur le TP 2.1c - Reference/Pointeur intelligent\n";

	ptrStdDouble d1 = nullptr;
	unsigned t1 = 5;
	constructeur(d1, t1);
	afficher(d1, t1);
	modifier(d1, t1, 2, 3.13589985);
	afficher(d1, t1);
	cout << get(d1, t1, 2) << endl;
	get(d1, t1, 2) = 62.1;
	cout << get(d1, t1, 2) << endl;
	afficher(d1, t1);
	destructeur(d1);
}