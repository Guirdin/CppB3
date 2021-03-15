////#include "Header.h"
//#include "Partie3.h"
//using std::cout;
//using std::cin;
//using std::endl;
//
//namespace Partie3 {
//
//	namespace Carte_YUGIOH {
//
//		ICarte_YUGIOH::ICarte_YUGIOH(const std::string& nomCarte,
//			const std::string& description, const std::string& numeroCarte)
//		{
//			this->a_nomCarte = nomCarte;
//			this->a_description = description;
//			this->a_numeroCarte = numeroCarte;
//		};
//
//		namespace CarteMagiePiegeYUGIOH {
//
//			// constructeur - Parent Carte_MagiePiege
//			Carte_MagiePiege::Carte_MagiePiege(const std::string& nomCarte, Icone icone,
//				const std::string& description, const std::string& numeroCarte)
//				:
//				ICarte_YUGIOH(nomCarte, description, numeroCarte) {
//				this->a_icone = icone;
//
//			};
//
//			// constructeur - Carte_Magie
//			Carte_Magie::Carte_Magie(const std::string& nomCarte,
//				Icone icone, const std::string& description, const std::string& numeroCarte)
//				:
//				ICarte_YUGIOH(nomCarte, description, numeroCarte),
//				Carte_MagiePiege(icone)
//			{};
//
//			// constructeur - Carte_Piege
//			Carte_Piege::Carte_Piege(const std::string& nomCarte,
//				Icone icone, const std::string& description, const std::string& numeroCarte)
//				:
//				Carte_MagiePiege(nomCarte, icone, description, numeroCarte) {};
//		}
//
//		void ICarte_YUGIOH::afficher() const {
//			std::cout << std::endl << "Nom: " << getNomCarte() << std::endl;
//
//			std::cout << "Type: " << getType() << std::endl;
//			std::cout << "Description: " << getDescription() << std::endl;
//			std::cout << "Numero: " << getNumeroCarte() << std::endl;
//		}
//		std::string ICarte_YUGIOH::getNomCarte() const {
//			return this->a_nomCarte;
//		}
//
//		std::string ICarte_YUGIOH::getNumeroCarte() const {
//			return this->a_numeroCarte;
//		}
//
//		std::string ICarte_YUGIOH::getDescription() const {
//			return this->a_description;
//		}
//	}
//
//	void TP::Carte_YUGIOH() {
//		std::cout << "\nBienvenue sur le TP 3.4 - Jeu de Carte Magie/Piege YU-GI-OH \n";
//
//		Carte_YUGIOH::CarteMagiePiegeYUGIOH::Carte_Magie cm1("Suit le vent", "Magie", Carte_YUGIOH::Carte_Magie::EQUIPEMENT,
//			"Un Monstre de Type Bete Ailee equipe de cette carte augmente son ATK et sa DEF de 300",
//			"LDD-F078");
//
//		Carte_YUGIOH::CarteMagiePiegeYUGIOH::Carte_Piege cp1("Les secrets de la bravoure", "Piege",
//			Carte_YUGIOH::CarteMagiePiegeYUGIOH::Carte_Magie::NORMAL,
//			"Selectionnez 1 Monstre Normal que vous controlez.\nLorsque le monstre selectionne inflige"
//			" des dommages de combat a votre adversaire ce tour,\nvotre adversaire"
//			" defausse 2 cartes au hasard", "FOTB-FR054");
//
//		cm1.afficher();
//
//		cp1.afficher();
//
//	}
//}