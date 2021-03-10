#ifndef PARTIE3_H
#define PARTIE3_H

#include <iostream>

namespace Partie3 {

    inline namespace JeuDeCarte1 {

        class Carte
        {
        public:
            enum Couleur : unsigned short { PIQUE, COEUR, CARREAU, TREFLE };
            //static std::array<std::string, 4> NomCouleur;

            Carte(Couleur, const std::string&); //constructeur
            Carte(Carte&); //constructeur - copie
            ~Carte(); // destructeur

            void setType(Couleur); // propriété setter -> type
            void setValeur(const std::string&);// propriété setter -> valeur

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
        
        //enum class Couleur : unsigned short { PIQUE, COEUR, CARREAU, TREFLE };
        enum Couleur : unsigned short { PIQUE, COEUR, CARREAU, TREFLE };

        class Carte
        {
        public:

            Carte(Couleur, const std::string&); //constructeur
            Carte(Carte&); //constructeur - copie

            //-> pour heritage : virtual ~Carte();
            virtual ~Carte(); // destructeur

            Carte& operator=(const Carte&);
            //bool operator==(const Carte&) const {};
            //bool operator!=(const Carte&) const {};

           bool operator==(const Carte& c) const {
                std::cerr << "operator==" << std::endl;
                if (&c == this) return true;
                return (this->_couleur == c._couleur &&
                    this->_valeur == c._valeur);
            }

            bool operator!=(const Carte& c) const {
                std::cerr << "operator!=" << std::endl;
                if (&c == this) return false;
                return (!(this->operator==(c)));
            }


            void setType(Couleur); // propriété setter -> type
            void setValeur(const std::string&);// propriété setter -> valeur

            friend std::ostream& operator<<(std::ostream&, const Carte&);

        private:
            // Attributs
            Couleur _couleur;
            std::string _valeur;

        };
    }

    inline namespace JeuDeCarteMonstreYUGIOH {

        //enum class Couleur : unsigned short { PIQUE, COEUR, CARREAU, TREFLE };

        class Carte_Monstre
        {
        public:
            enum Attribut : unsigned short { TENEBRE, TERRE, FEU, LUMIERE, EAU, VENT };
            //static std::array<std::string, 4> NomAttribut;

            //-> pour heritage : virtual void afficher() const
            virtual std::string afficher() const;

            //constructeur
            Carte_Monstre(Attribut, const int&, const int&, const std::string&,
                const int&, const std::string&, const std::string&, const [2] std::string&);

            Attribut getAttribut();
            int getATK();
            int getDEF();
            std::string getDescription();
            int getNiveau();
            std::string getNomCarte();
            std::string getNumeroCarte();
            [2]std::string getType();

        private:

            Attribut a_attribut;
            int a_ATK;
            int a_DEF;
            std::string a_description;
            int a_niveau;
            std::string a_nomCarte;
            std::string a_numeroCarte;
            std::string a_type[2];
        };
    }

    class TP {
    public:
        
        static void JeuDeCarte1();
        static void JeuDeCarte2();
        static void JeuDeCarteMonstreYUGIOH();
    };
}
#endif // PARTIE3_H