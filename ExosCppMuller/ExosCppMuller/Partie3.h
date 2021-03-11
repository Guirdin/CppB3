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
            Carte(Couleur, const std::string&);

            // constructeur - copie
            Carte(Carte&);

            // destructeur
            ~Carte(); 

            // propriété setter -> type
            void setType(const Couleur);

            // propriété setter -> valeur
            void setValeur(const std::string&);

            //-> pour heritage : virtual void afficher() const
            virtual void afficher() const;

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

            void affecter(Carte&);

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
            Carte(Couleur, const std::string&); 

            // constructeur - copie
            Carte(Carte&); 

            //-> pour heritage : virtual ~Carte(); destructeur
            virtual ~Carte(); 

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
            void setType(const Couleur);

            // propriété setter -> valeur
            void setValeur(const std::string&);
            
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

        class Carte_Monstre
        {
        public:
            enum TypeCarte : unsigned short { NORMAL, EFFET, RITUEL, FUSION, SYNCHRO, XYZ };

            enum Attribut : unsigned short { TENEBRE, TERRE, FEU, LUMIERE, EAU, VENT, DIVIN };

            enum Type : unsigned short { DRAGON, ZOMBIE, DEMON, PYRO, SERPENT_DE_MER, ROCHER,
                MACHINE, POISSON, DINOSAURE, INSECTE, BETE, BETE_GUERRIER, PLANTE,
                AQUA, GUERRIER, BETE_AILEE, ELFE, MAGICIEN,TONNERRE, REPTILE, PSYCHIQUE,
                WYRM, CYBERSE, BETE_DIVINE};


            static const std::array<std::string, 6> NomTypeCarte;
            static const std::array<std::string, 7> NomAttribut;
            static const std::array<std::string, 24> NomType;


            //-> pour heritage : virtual void afficher() const
            virtual void afficher() const;

            // constructeur
            Carte_Monstre(const std::string&, Attribut, const int&, const std::string&, Type, 
                TypeCarte, const std::string&, const int&, const int&
            );

            // destructeur
            virtual ~Carte_Monstre(); 

            Attribut getAttribut() const;
            int getATK() const;
            int getDEF() const;
            std::string getDescription() const;
            int getNiveau() const;
            std::string getNomCarte() const;
            std::string getNumeroCarte() const;
            TypeCarte getTypeCarte() const;
            Type getType() const;

        private:

            Attribut a_attribut;
            int a_ATK;
            int a_DEF;
            std::string a_description;
            int a_niveau;
            std::string a_nomCarte;
            std::string a_numeroCarte;
            TypeCarte a_typeCarte;
            Type a_type;

        };
    }

    inline namespace CarteMagiePiegeYUGIOH {

        class Carte_MagiePiege abstract
        {
        public:

            enum Icone : unsigned short { NORMAL, TERRAIN, EQUIPEMENT, 
                CONTINUE, JEU_RAPIDE, RITUELLE, CONTRE_PIEGE };

            class Carte_Magie {
            public:

                // constructeur
                Carte_Magie();

                //-> pour heritage : virtual void afficher() const
                virtual void afficher() const;
            };

            class Carte_Piege {
            public:

                // constructeur
                Carte_Piege();

                //-> pour heritage : virtual void afficher() const
                virtual void afficher() const;
            };

            std::string getDescriptionCarte() const;
            std::string getNomCarte() const;
            std::string getNumeroCarte() const;

        private:

            std::string a_descriptionCarte;
            std::string a_nomCarte;
            std::string a_numeroCarte;

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