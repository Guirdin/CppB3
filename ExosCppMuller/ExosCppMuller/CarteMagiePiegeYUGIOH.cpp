//#include "Header.h"
#include "Partie3.h"
using std::cout;
using std::cin;
using std::endl;

namespace Partie3 {

	inline namespace CarteMagiePiegeYUGIOH {

		const std::array<std::string, 7> Carte_MagiePiege::NomIcone = { "NORMAL", "TERRAIN",
			"EQUIPEMENT", "CONTINUE", "JEU_RAPIDE", "RITUELLE""CONTRE_PIEGE"
		};

		// constructeur - parent
		Carte_MagiePiege::Carte_MagiePiege(const std::string& nomCarte, const std::string& type, Icone icone,
			const std::string& descriptionCarte, const std::string& numeroCarte) 
		{
			a_nomCarte = nomCarte;
			a_type = type;
			a_icone = icone;
			a_descriptionCarte = descriptionCarte;
			a_numeroCarte = numeroCarte;
		};

		// constructeur
		Carte_Magie::Carte_Magie(const std::string& nomCarte, const std::string& type,
			Icone icone, const std::string& descriptionCarte, const std::string& numeroCarte)
			:
			Carte_MagiePiege(nomCarte, type, icone, descriptionCarte, numeroCarte){};

		// constructeur
		Carte_Piege::Carte_Piege(const std::string& nomCarte, const std::string& type,
			Icone icone, const std::string& descriptionCarte, const std::string& numeroCarte)
			:
			Carte_MagiePiege(nomCarte, type, icone, descriptionCarte, numeroCarte) {};

		void Carte_MagiePiege::afficher() const {
			std::cout << std::endl << "CARTE MAGIE/PIEGE" << std::endl;

			std::cout << std::endl << "Carte: " << this->a_nomCarte << std::endl;
			std::cout << "Type: [" << this->a_type << "/" <<
				this->NomIcone[a_icone] << "]" << std::endl;
			std::cout << "Description: " << this->a_descriptionCarte << std::endl;
			std::cout << "Numero: " << this->a_numeroCarte << std::endl;
		}

		void Carte_Magie::afficher() const {
			std::cout << std::endl << "CARTE MAGIE" << std::endl;

			std::cout << std::endl << "Carte: " << this->a_nomCarte << std::endl;
			std::cout << "Type: [" << this->a_type << "/" <<
				this->NomIcone[a_icone] << "]" << std::endl;
			std::cout << "Description: " << this->a_descriptionCarte << std::endl;
			std::cout << "Numero: " << this->a_numeroCarte << std::endl;
		}

		void Carte_Piege::afficher() const {
			std::cout << std::endl << "CARTE PIEGE" << std::endl;

			std::cout << std::endl << "Carte: " << this->a_nomCarte << std::endl;
			std::cout << "Type: [" << this->a_type << "/" <<
				this->NomIcone[a_icone] << "]" << std::endl;
			std::cout << "Description: " << this->a_descriptionCarte << std::endl;
			std::cout << "Numero: " << this->a_numeroCarte << std::endl;
		}

		std::string Carte_MagiePiege::getType() const {
			return this->a_type;
		};

		std::string Carte_Magie::getType() const {
			return this->a_type;
		};

		std::string Carte_Piege::getType() const {
			return this->a_type;
		};

		std::string Carte_MagiePiege::getNomCarte() const {
			return this->a_nomCarte;
		};

		Carte_MagiePiege::Icone Carte_MagiePiege::getIcone() const {
			return this->a_icone;
		};

		std::string Carte_MagiePiege::getDescriptionCarte() const {
			return this->a_descriptionCarte;
		};

		std::string Carte_MagiePiege::getNumeroCarte() const {
			return this->a_numeroCarte;
		};

	}

	void TP::CarteMagiePiegeYUGIOH() {
		std::cout << "\nBienvenue sur le TP 3.4 - Jeu de Carte Magie/Piege YU-GI-OH \n";


	}
}