//#include "Header.h"
#include "Partie3.h"
using std::cout;
using std::cin;
using std::endl;

namespace Partie3 {

	inline namespace CarteMonstreYUGIOH {

		const std::array<std::string, 6> Carte_Monstre::NomTypeCarte = { 
			"NORMAL", "EFFET", "RITUEL", "FUSION", "SYNCHRO", "XYZ" 
		};

		const std::array<std::string, 7> Carte_Monstre::NomAttribut = { 
			"TENEBRE", "TERRE", "FEU", "LUMIERE", "EAU", "VENT", "DIVIN" 
		};

		const std::array<std::string, 24> Carte_Monstre::NomType = {
			"DRAGON", "ZOMBIE", "DEMON", "PYRO", "SERPENT_DE_MER", "ROCHER",
			"MACHINE", "POISSON", "DINOSAURE", "INSECTE", "BETE", "BETE_GUERRIER", "PLANTE",
			"AQUA", "GUERRIER", "BETE_AILEE", "ELFE", "MAGICIEN", "TONNERRE", "REPTILE", "PSYCHIQUE",
			"WYRM", "CYBERSE", "BETE_DIVINE"
		};

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

		// destructeur
		Carte_Monstre::~Carte_Monstre() {
			std::cout << __func__ << std::endl;
		};

		// getter - Nom de la carte
		std::string Carte_Monstre::getNomCarte() const{
			return this->a_nomCarte;
		};

		// getter - Attribut de la carte
		Carte_Monstre::Attribut Carte_Monstre::getAttribut() const{
			return this->a_attribut;
		};

		// getter - Niveau de la carte
		int Carte_Monstre::getNiveau() const{
			return this->a_niveau;
		};

		// getter - Numéro de la carte
		std::string Carte_Monstre::getNumeroCarte() const{
			return this->a_numeroCarte;
		};

		// getter - Type du Monstre
		Carte_Monstre::Type Carte_Monstre::getType() const {
			return this->a_type;
		};

		// getter - Type de la carte
		Carte_Monstre::TypeCarte Carte_Monstre::getTypeCarte() const {
			return this->a_typeCarte;
		};

		// getter - Description de la carte
		std::string Carte_Monstre::getDescription()  const{
			return this->a_description;
		};

		// getter - Point d'attaque de la carte
		int Carte_Monstre::getATK()  const{
			return this->a_ATK;
		};

		// getter - Point de défense de la carte
		int Carte_Monstre::getDEF()  const{
			return this->a_DEF;
		};

		// Méthode d'affichage
		void Carte_Monstre::afficher() const {
			std::cout << std::endl << "Carte: " << this->a_nomCarte << std::endl;
			std::cout << "Attribut: " << NomAttribut[this->a_attribut] << std::endl;
			std::cout << "Niveau: " << this->a_niveau << std::endl;
			std::cout << "Numero: " << this->a_numeroCarte << std::endl;
			std::cout << "Type: [" << this->NomType[a_type] << "/" <<
				this->NomTypeCarte[a_typeCarte] << "]" << std::endl;
			std::cout << "Description: " << this->a_description << std::endl;
			std::cout << "Attaque: " << this->a_ATK << std::endl;
			std::cout << "Defense: " << this->a_DEF << std::endl;
		}
	}

	void TP::CarteMonstreYUGIOH() {
		std::cout << "\nBienvenue sur le TP 3.3 - Jeu de Carte Monstre YU-GI-OH \n";

		CarteMonstreYUGIOH::Carte_Monstre cm1("Canard Supersonique", Carte_Monstre::VENT,
			3, "SBAD-FR036", Carte_Monstre::BETE_AILEE, Carte_Monstre::NORMAL,
			"Un canard qui peut se deplacer a des vitesses transsoniques.\n"
			"Il lui arrive de se tromper dans ses foulees et de perdre le controle.\n", 
			1700, 700 );

		cm1.afficher();
		
	}
}