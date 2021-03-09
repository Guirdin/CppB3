#include "Header.h"
//#include "Partie3.h"

#include <iostream>

//namespace Partie3 {

	enum Couleur { PIQUE, COEUR = 1, CARREAU = 2, TREFLE = 3 };

	class Carte
	{
		public:
			Couleur couleur;
			std::string valeur{};
	};

	using ptrCarte = Carte*;

	ptrCarte creer()
	{
		cout << "\nCréation d'une Carte\n";
		return new Carte;
	}

	void initialiser(ptrCarte& pc) {
		cout << "\nInitialisation de la Carte\n";
		pc->valeur = "10";
		pc->couleur = COEUR;
	}

	void afficher(const ptrCarte& pc) {
		if (pc != nullptr) {
			cout << "\nLa Carte à pour valeur [" << pc->valeur << "]";
			cout << "\nLa Carte à la couleur [" << pc->couleur << "]\n";
		}
	}

	void detruire(ptrCarte& pc) {
		cout << "\nDestruction de la Carte\n";
		delete pc;
		pc = nullptr;
	}

	void JeuDeCarte1() {
		cout << "\nBienvenue sur le TP 3.1 - Carte\n";

		//Carte c1(PIQUE, "As");
		ptrCarte pc1 = nullptr;
		pc1 = creer();
		initialiser(pc1);
		afficher(pc1);
		detruire(pc1);
		afficher(pc1);

	}
//}