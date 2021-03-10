//#include "Header.h"
#include "Partie3.h"
#include "JeuDeCarte2.h"

#include <iostream>
#include <memory>

namespace JeuDeCarte2 {

	//constructeur
	Carte::Carte(Couleur couleur, const std::string& valeur)
		:
		_couleur(couleur),
		_valeur(valeur)
	{};

	//constructeur - copie
	Carte::Carte(Carte& crt)
		:
		Carte(crt._couleur, crt._valeur)
	{};

	// destructeur
	Carte::~Carte() {
		std::cout << __func__ << std::endl;
	}

	Carte& Carte::operator=(const Carte& c) {
		std::cerr << "operator=" << std::endl;
		if (&c != this) {
			this->_couleur = c._couleur;
			this->_valeur = c._valeur;
		}
		return *this;
	}

	bool Carte::operator==(const Carte& c) const {
		std::cerr << "operator==" << std::endl;
		if (&c == this) return true;
		return (this->_couleur == c._couleur &&
			this->_valeur == c._valeur);
	}

	bool Carte::operator!=(const Carte& c) const {
		std::cerr << "operator!=" << std::endl;
		if (&c == this) return false;
		return (!(this->operator==(c)));
	}

	// setter type - enumération Couleur
	void Carte::setType(Couleur couleur) {
		this->_couleur = couleur;
	}

	// setter valeur - string valeur
	void Carte::setValeur(const std::string& valeur) {
		this->_valeur = valeur;
	}
}

namespace Partie3 {

	void TP::JeuDeCarte2() {
		std::cout << "\nBienvenue sur le TP 3.2 - Jeu de Carte (2) \n";

		JeuDeCarte2::Carte c1(JeuDeCarte2::Couleur::PIQUE, "As");
		cout << c1 << endl;

		JeuDeCarte2::Carte c2(c1);
		cout << c2 << endl;

		c2.setType(JeuDeCarte2::Couleur::TREFLE);
		c2.setValeur("Queen");
		cout << c2 << endl;

		if (c1 != c2) {
			cout << "C'est bon" << endl;
		}
		else {
			std::cerr << "Une erreur survenue" << endl;
		}
	}
}