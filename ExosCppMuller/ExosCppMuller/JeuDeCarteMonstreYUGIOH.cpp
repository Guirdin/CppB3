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
			const std::string& numeroCarte/*, const [2] std::string& type*/)
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

		Carte_Monstre::Attribut Carte_Monstre::getAttribut() const{
			return this->a_attribut;
		};
		int Carte_Monstre::getATK()  const{
			return this->a_ATK;
		};
		int Carte_Monstre::getDEF()  const{
			return this->a_DEF;
		};
		std::string Carte_Monstre::getDescription()  const{
			return this->a_description;
		};
		int Carte_Monstre::getNiveau() const{
			return this->a_niveau;
		};
		std::string Carte_Monstre::getNomCarte() const{
			return this->a_nomCarte;
		};
		std::string Carte_Monstre::getNumeroCarte() const{
			return this->a_numeroCarte;
		};
		/*[2] std::string Carte_Monstre::getType() const{

		};*/
	}

	void TP::JeuDeCarteMonstreYUGIOH() {
		std::cout << "\nBienvenue sur le TP 3.3 - Jeu de Carte YU-GI-OH \n";

		
	}
}