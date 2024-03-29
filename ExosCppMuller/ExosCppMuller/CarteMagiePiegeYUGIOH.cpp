//#include "Header.h"
#include "Partie3.h"
using std::cout;
using std::cin;
using std::endl;

namespace Partie3 {

	//namespace Carte_YUGIOH {

		/*ICarte_YUGIOH::ICarte_YUGIOH(const std::string& nomCarte,
			const std::string& description, const std::string& numeroCarte)
		{
			this->a_nomCarte = nomCarte;
			this->a_description = description;
			this->a_numeroCarte = numeroCarte;
		};*/

		inline namespace CarteMagiePiegeYUGIOH {

			// Array - nom des icones de l'enum Icone
			const std::array<std::string, 7> Carte_MagiePiege::NomIcone = { "NORMAL", "TERRAIN",
				"EQUIPEMENT", "CONTINUE", "JEU_RAPIDE", "RITUELLE""CONTRE_PIEGE"
			};

			// constructeur - Parent Carte_MagiePiege
			Carte_MagiePiege::Carte_MagiePiege(const std::string& nomCarte, Icone icone,
				const std::string& description, const std::string& numeroCarte)
			{
				this->a_nomCarte = nomCarte;
				this->a_icone = icone;
				this->a_description = description;
				this->a_numeroCarte = numeroCarte;
			};

			// constructeur - Carte_Magie
			Carte_Magie::Carte_Magie(const std::string& nomCarte,
				Icone icone, const std::string& description, const std::string& numeroCarte)
				:
				Carte_MagiePiege(nomCarte, icone, description, numeroCarte) {};

			// constructeur - Carte_Piege
			Carte_Piege::Carte_Piege(const std::string& nomCarte,
				Icone icone, const std::string& description, const std::string& numeroCarte)
				:
				Carte_MagiePiege(nomCarte, icone, description, numeroCarte) {};

			// destructeur - Carte_Magie
			Carte_Magie::~Carte_Magie() {
				std::cout << std::endl << __func__ << std::endl;
			};

			// destructeur - Carte_Piege
			Carte_Piege::~Carte_Piege() {
				std::cout << std::endl << __func__ << std::endl;
			};

			// M�thode d'affichage - Carte_MagiePiege
			void Carte_MagiePiege::afficher() const {
				std::cout << std::endl << "Nom: " << getNomCarte() << std::endl;

				std::cout << "Type: " << getType() << " " <<
					NomIcone[getIcone()] << std::endl;
				std::cout << "Description: " << getDescription() << std::endl;
				std::cout << "Numero: " << getNumeroCarte() << std::endl;
			}

			// getter - Type de la Carte_Magie
			std::string Carte_Magie::getType() const {
				return "Carte Magie";
			};

			// getter - Type de la Carte_Piege
			std::string Carte_Piege::getType() const {
				return "Carte Piege";
			};

			// getter - Nom de la Carte
			std::string Carte_MagiePiege::getNomCarte() const {
				return this->a_nomCarte;
			};

			// getter - enum�ration Icone
			Carte_MagiePiege::Icone Carte_MagiePiege::getIcone() const {
				return this->a_icone;
			};

			// getter - Description de la Carte
			std::string Carte_MagiePiege::getDescription() const {
				return this->a_description;
			};

			// getter - Num�ro de la Carte
			std::string Carte_MagiePiege::getNumeroCarte() const {
				return this->a_numeroCarte;
			};
		}
	//}
		void TP::CarteMagiePiegeYUGIOH() {
			std::cout << "\nBienvenue sur le TP 3.4 - Jeu de Carte Magie/Piege YU-GI-OH \n";

			Carte_Magie cm1("Suit le vent", Carte_Magie::EQUIPEMENT,
				"Un Monstre de Type Bete Ailee equipe de cette carte augmente son ATK et sa DEF de 300",
				"LDD-F078");

			Carte_Piege cp1("Les secrets de la bravoure", Carte_Magie::NORMAL,
				"Selectionnez 1 Monstre Normal que vous controlez. "
				"\nLorsque le monstre selectionne inflige"
				" des dommages de combat a votre adversaire ce tour,\nvotre adversaire"
				" defausse 2 cartes au hasard", "FOTB-FR054");

			cm1.afficher();

			cp1.afficher();

		}
}