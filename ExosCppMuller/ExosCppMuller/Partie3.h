#ifndef PARTIE3_H
#define PARTIE3_H

#include <iostream>
#include <array>

namespace Partie3 {

    inline static const std::array<std::string, 4> NomCouleur = { "PIQUE", "COEUR", "CARREAU", "TREFLE" };

    inline namespace JeuDeCarte1 {

        class Carte
        {
        public:
            enum Couleur : unsigned short { PIQUE, COEUR, CARREAU, TREFLE };

            // constructeur
            Carte(Couleur couleur, const std::string& valeur);

            // constructeur - copie
            Carte(Carte& crt);

            // destructeur
            ~Carte(); 

            // propriété setter -> type
            void setType(const Couleur couleur);

            // propriété setter -> valeur
            void setValeur(const std::string& valeur);

            //-> méthode - afficher
            void afficher() const;

            inline bool equal(Carte& carte) {
                if (this->_couleur == carte._couleur)
                {
                    if (this->_valeur == carte._valeur) { return true; }
                    else { return false; }
                }
                else {
                    return false;
                }
            }

            void affecter(Carte& carte);

        private:
            // Attributs
            Couleur _couleur;
            std::string _valeur;

        };
    }

    inline namespace JeuDeCarte2 {
        
        enum class Couleur : unsigned short { PIQUE, COEUR, CARREAU, TREFLE };

        class Carte
        {
        public:

            // constructeur
            Carte(Couleur couleur, const std::string& valeur); 

            // constructeur - copie
            Carte(Carte& crt); 

            // destructeur
            ~Carte(); 

            Carte& operator=(const Carte&);

            inline bool operator==(const Carte& c) const {
                std::cerr << "operator==" << std::endl;
                if (&c == this) return true;
                return (this->_couleur == c._couleur &&
                    this->_valeur == c._valeur);
            }

            inline bool operator!=(const Carte& c) const {
                std::cerr << "operator!=" << std::endl;
                if (&c == this) return false;
                return (!(this->operator==(c)));
            }

            // propriété setter -> type
            void setType(const Couleur couleur);

            // propriété setter -> valeur
            void setValeur(const std::string& valeur);
            
            // Attribut - Nombre de création
            static unsigned NbCreation; 

            // propriété getter -> Nombre de création
            //static unsigned GetNbCreation(); 

            friend std::ostream& operator<<(std::ostream&, const Carte&);

        private:
            // Attributs
            Couleur _couleur;
            std::string _valeur;
        };
    }

    inline namespace CarteMonstreYUGIOH {

        // Interface class
        //class ICarte_YUGIOH
        //{
        //public:
        //    virtual ~ICarte_YUGIOH() = 0 {};

        //    virtual void afficher() const = 0;
        //    virtual std::string getDescription() const = 0;
        //    //virtual std::string getNomClasse() const = 0;
        //    virtual std::string getNumeroCarte() const = 0;
        //    virtual Carte_Monstre::TypeCarte getTypeCarte() const = 0;
        //    virtual Carte_Monstre::TypeMonstre getTypeMonstre() const = 0;
        //    virtual std::string getType() const = 0;

        //};

        class Carte_Monstre /*: virtual public ICarte_YUGIOH*/
        {
        public:
            enum TypeCarte : unsigned short { NORMAL, EFFET, RITUEL, FUSION, SYNCHRO, XYZ };

            enum Attribut : unsigned short { TENEBRE, TERRE, FEU, LUMIERE, EAU, VENT, DIVIN };

            enum TypeMonstre : unsigned short { DRAGON, ZOMBIE, DEMON, PYRO, SERPENT_DE_MER, ROCHER,
                MACHINE, POISSON, DINOSAURE, INSECTE, BETE, BETE_GUERRIER, PLANTE,
                AQUA, GUERRIER, BETE_AILEE, ELFE, MAGICIEN,TONNERRE, REPTILE, PSYCHIQUE,
                WYRM, CYBERSE, BETE_DIVINE };

            static const std::array<std::string, 6> NomTypeCarte;
            static const std::array<std::string, 7> NomAttribut;
            static const std::array<std::string, 24> NomTypeMonstre;

            //-> méthode - afficher
            void afficher() const;

            // constructeur
            Carte_Monstre(const std::string& nomCarte, Attribut attribut, const int& niveau,
                const std::string& numeroCarte, TypeMonstre typeMonstre, TypeCarte typeCarte,
                const std::string& description, const int& ATK, const int& DEF);

            // destructeur
            ~Carte_Monstre(); 

            // getter
            std::string getNomCarte() const;
            Attribut getAttribut() const;
            int getNiveau() const;
            std::string getNumeroCarte() const;
            TypeMonstre getTypeMonstre() const;
            TypeCarte getTypeCarte() const;
            std::string getDescription() const;
            int getATK() const;
            int getDEF() const;

        private:

            // attributs de class
            std::string a_nomCarte;
            Attribut a_attribut;
            int a_niveau;
            std::string a_numeroCarte;
            TypeMonstre a_typeMonstre;
            TypeCarte a_typeCarte;
            std::string a_description;
            int a_ATK;
            int a_DEF;
        };
    }

    inline namespace CarteMagiePiegeYUGIOH {

        // Class abstraite
        class Carte_MagiePiege /*: virtual public ICarte_YUGIOH*/
        {
        public:

            enum Icone : unsigned short { NORMAL, TERRAIN, EQUIPEMENT, 
                CONTINUE, JEU_RAPIDE, RITUELLE, CONTRE_PIEGE };

            static const std::array<std::string, 7> NomIcone;

            // constructeur
            Carte_MagiePiege(const std::string& nomCarte, const std::string& type, Icone icone,
                const std::string& a_descriptionCarte, const std::string& numeroCarte);

            // destructeur
            virtual ~Carte_MagiePiege();

            //méthode virtuelle - pour l'héritage
            virtual void afficher() const;

            // getter virtuelle - pour l'héritage
            virtual std::string getNomCarte() const;
            virtual std::string getType() const;
            virtual Icone getIcone() const;
            virtual std::string getDescriptionCarte() const;
            virtual std::string getNumeroCarte() const;

        protected:

            std::string a_nomCarte;
            std::string a_type;
            Icone a_icone;
            std::string a_descriptionCarte;
            std::string a_numeroCarte;

        };

        class Carte_Magie : public Carte_MagiePiege
        {
        public:

            // constructeur
            Carte_Magie(const std::string& nomCarte, const std::string& type, Icone icone,
                const std::string& descriptionCarte, const std::string& numeroCarte);

            // destructeur
            ~Carte_Magie();

            //-> pour heritage : virtual void afficher() const
            void afficher() const;

            // getter - Type
            std::string getType() const;

        };

        class Carte_Piege : public Carte_MagiePiege
        {
        public:

            // constructeur
            Carte_Piege(const std::string& nomCarte, const std::string& type, Icone icone,
                const std::string& descriptionCarte, const std::string& numeroCarte);

            // destructeur
            ~Carte_Piege();

            //-> pour heritage : virtual void afficher() const
            void afficher() const;

            // getter - Type
            std::string getType() const;

        };
    }

    class TP {
    public:
        
        static void JeuDeCarte1();
        static void JeuDeCarte2();
        static void CarteMonstreYUGIOH();
        static void CarteMagiePiegeYUGIOH();
    };
}
#endif // PARTIE3_H