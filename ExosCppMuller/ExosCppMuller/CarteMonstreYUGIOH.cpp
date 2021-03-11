//#include "Header.h"
#include "Partie3.h"
using std::cout;
using std::cin;
using std::endl;

namespace Partie3 {

	inline namespace CarteMonstreYUGIOH {

		//constructeur
		Carte_Monstre::Carte_Monstre(Attribut attribut, const int& ATK, const int& DEF,
			const std::string& description, const int& niveau, const std::string& nomCarte,
			const std::string& numeroCarte, TypeCarte typeCarte, Type type)
			:
			a_attribut(attribut),
			a_ATK(ATK),
			a_DEF(DEF),
			a_description(description),
			a_niveau(niveau),
			a_nomCarte(nomCarte),
			a_numeroCarte(numeroCarte),

			a_typeCarte(typeCarte),
			a_type(type)

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
		Carte_Monstre::TypeCarte Carte_Monstre::getTypeCarte() const {
			return this->a_typeCarte;
		};
		Carte_Monstre::Type Carte_Monstre::getType() const {
			return this->a_type;
		};

		void Carte_Monstre::afficher() const {
			std::cout << std::endl << "Carte [ " << a_nomCarte << " ]" << std::endl;
			std::cout << "Attribut: " << this->a_attribut << std::endl;
			std::cout << "Attaque: " << this->a_ATK << std::endl;
			std::cout << "Défense: " << this->a_DEF << std::endl;
			std::cout << "Description: " << this->a_description << std::endl;
			std::cout << "Niveau: " << this->a_niveau << std::endl;
			std::cout << "Numéro: " << this->a_numeroCarte << std::endl;
			std::cout << "Type: [" << this->a_type << "/" << this->a_typeCarte << "]" << std::endl;
		}
	}

	void TP::CarteMonstreYUGIOH() {
		std::cout << "\nBienvenue sur le TP 3.3 - Jeu de Carte YU-GI-OH \n";

		//JeuDeCarte1::Carte c1(JeuDeCarte1::Carte::PIQUE, "As");
		/*CarteMonstreYUGIOH::Carte_Monstre cm1(CarteMonstreYUGIOH::Carte_Monstre::TENEBRE, 2800,
			);*/
		
	}
}