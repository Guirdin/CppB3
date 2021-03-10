//#include "Header.h"
#include "JeuDeCarte1.h"
#include "Partie3.h"
#include <iostream>
#include <memory>


namespace Partie3 {

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

	// setter type - enumération Couleur
	void Carte::setType(Couleur couleur) {
		this->_couleur = couleur;
	}

	// setter valeur - string valeur
	void Carte::setValeur(const std::string& valeur) {
		this->_valeur = valeur;
	}

	void Carte::afficher() const {
		std::cout << this << std::endl;
		std::cout << this->_couleur << std::endl;
		std::cout << this->_valeur << std::endl;
	}

	bool Carte::equal(Carte& carte) {
		if (this->_couleur == carte._couleur) 
		{
			if (this->_valeur == carte._valeur) { return true;}
			else {return false;}	
		}
		else {
			return false;
		}
	}

	void Carte::affecter(Carte& carte) {
		this->_couleur = carte._couleur;
		this->_valeur = carte._valeur;
	}
	
    void TP::JeuDeCarte1() {
        std::cout << "\nBienvenue sur le TP 3.1 - Jeu de Carte (1) \n";

        Carte c1(Carte::Couleur::PIQUE, "As");
		c1.afficher();

		Carte c2(c1);
		c2.afficher();
		c2.setType(Carte::Couleur::TREFLE);
		c2.setValeur("Queen");
		c2.afficher();
		Carte c3(Carte::Couleur::PIQUE, "2");
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
		}
	}
}


