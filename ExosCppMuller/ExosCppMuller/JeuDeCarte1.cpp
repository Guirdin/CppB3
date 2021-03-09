#include "Header.h"
#include "Partie3.h"
#include "JeuDeCarte1.h"

#include <iostream>
#include <memory>


//namespace Partie3 {

	Carte::Carte(Couleur couleur, std::string& valeur)
		:
		_couleur(couleur),
		_valeur(valeur),
	{};

	Carte::~Carte() {
		std::cout << __func__ << std::endl;
	}

	void Carte::setType(Couleur couleur) {
		this->_couleur = couleur;
	}

	void Carte::setValeur(std::string& valeur) {
		this->_valeur = valeur;
	}

	void Carte::afficher() const {
		std::cout << this->_couleur << std::endl;
		std::cout << this->_valeur << std::endl;
	}

	bool Carte::equal(Carte& carte) {
		return this == carte;
	}

	void Carte::affecter(Carte& carte) {
		this = carte;
	}

	void Partie3::TP::JeuDeCarte1() {
		cout << "\nBienvenue sur le TP 3.1 - Jeu de Carte (1) \n";

		Carte c1(PIQUE, "As");
		c1.afficher();

		/*Carte c2(c1);
		c2.afficher();
		c2.setType(TREFLE);
		c2.setValeur("Queen");
		c2.afficher();
		Carte c3(PIQUE, "2");
		c2.affecter(c3);
		c2.afficher();
		c3.afficher();

		if (c1.equal(c2)) {
			cout << "C'est bon" << endl;
		}
		else {
			std::cerr << "Une erreur survenue" << endl;
			c1.afficher();
			c2.afficher();
		}*/
	}
//}


