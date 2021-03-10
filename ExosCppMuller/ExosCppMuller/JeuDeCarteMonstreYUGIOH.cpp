//#include "Header.h"
#include "Partie3.h"
using std::cout;
using std::cin;
using std::endl;

namespace Partie3 {

	inline namespace JeuDeCarteMonstreYUGIOH {

		//constructeur
		Carte_Monstre::Carte_Monstre(Attribut attribut, const int& ATK, const int& DEF,
			const std::string& description, const int& niveau, const std::string& nomCarte,
			const std::string& numeroCarte, const [2] std::string& type)
			:
			a_attribut(attribut),
			a_ATK(ATK),
			a_DEF(DEF),
			a_description(description),
			a_niveau(niveau),
			a_nomCarte(nomCarte),
			a_numeroCarte(numeroCarte)
			//a_type(type)
		{};

		/*Attribut getAttribut();
		int getATK();
		int getDEF();
		std::string getDescription();
		int getNiveau();
		std::string getNomCarte();
		std::string getNumeroCarte();
		[2] std::string getType();*/
	}

	void TP::JeuDeCarteMonstreYUGIOH() {
		std::cout << "\nBienvenue sur le TP 3.3 - Jeu de Carte YU-GI-OH \n";

		
	}
}