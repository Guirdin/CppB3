//#include "Header.h"
#include "Partie3.h"
using std::cout;
using std::cin;
using std::endl;

namespace Partie3 {

	inline namespace CarteMagiePiegeYUGIOH {

		void Carte_MagiePiege::afficher() const {
			std::cout << std::endl << "Carte: " << this->a_nomCarte << std::endl;
			std::cout << "Description: " << this->a_descriptionCarte << std::endl;
			std::cout << "Numero: " << this->a_numeroCarte << std::endl;
		}

	}

	void TP::CarteMagiePiegeYUGIOH() {
		std::cout << "\nBienvenue sur le TP 3.4 - Jeu de Carte Magie/Piege YU-GI-OH \n";


	}
}