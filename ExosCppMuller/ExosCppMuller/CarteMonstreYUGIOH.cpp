//#include "Header.h"
#include "Partie3.h"
using std::cout;
using std::cin;
using std::endl;

namespace Partie3 {

	inline namespace CarteMonstreYUGIOH {

		//constructeur
		Carte_Monstre::Carte_Monstre(const std::string& nomCarte, Attribut attribut, 
			const int& niveau, const std::string& numeroCarte ,Type type, TypeCarte typeCarte,
			const std::string& description, const int& ATK, const int& DEF)
			:
			a_nomCarte(nomCarte),
			a_attribut(attribut),
			a_niveau(niveau),
			a_numeroCarte(numeroCarte),
			a_type(type),
			a_typeCarte(typeCarte),
			a_description(description),
			a_ATK(ATK),
			a_DEF(DEF)
		{};

		std::string Carte_Monstre::getNomCarte() const{
			return this->a_nomCarte;
		};

		Carte_Monstre::Attribut Carte_Monstre::getAttribut() const{
			return this->a_attribut;
		};

		int Carte_Monstre::getNiveau() const{
			return this->a_niveau;
		};
		
		std::string Carte_Monstre::getNumeroCarte() const{
			return this->a_numeroCarte;
		};
		
		Carte_Monstre::Type Carte_Monstre::getType() const {
			return this->a_type;
		};
		
		Carte_Monstre::TypeCarte Carte_Monstre::getTypeCarte() const {
			return this->a_typeCarte;
		};

		std::string Carte_Monstre::getDescription()  const{
			return this->a_description;
		};

		int Carte_Monstre::getATK()  const{
			return this->a_ATK;
		};

		int Carte_Monstre::getDEF()  const{
			return this->a_DEF;
		};

		void Carte_Monstre::afficher() const {
			std::cout << std::endl << "Carte: " << this->a_nomCarte << std::endl;
			std::cout << "Attribut: " << this->a_attribut << std::endl;
			std::cout << "Niveau: " << this->a_niveau << std::endl;
			std::cout << "Numero: " << this->a_numeroCarte << std::endl;
			std::cout << "Type: [" << this->a_type << "/" << this->a_typeCarte << "]" << std::endl;
			std::cout << "Description: " << this->a_description << std::endl;
			std::cout << "Attaque: " << this->a_ATK << std::endl;
			std::cout << "Defense: " << this->a_DEF << std::endl;
		}
	}

	void TP::CarteMonstreYUGIOH() {
		std::cout << "\nBienvenue sur le TP 3.3 - Jeu de Carte YU-GI-OH \n";

		CarteMonstreYUGIOH::Carte_Monstre cm1("Canard Supersonique", Carte_Monstre::VENT,
			3, "SBAD-FR036", Carte_Monstre::BETE_AILEE, Carte_Monstre::NORMAL,
			"Un canard qui peut se deplacer à des vitesses transsoniques.\n"
			"Il lui arrive de se tromper dans ses foulees et de perdre le controle.\n", 
			1700, 700
			);

		cm1.afficher();
		
	}
}