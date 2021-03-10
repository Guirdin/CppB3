#ifndef DEF_CARTE2
#define DEF_CARTE2
#include "Couleur.h"

#include <iostream>
#include <string>

namespace JeuDeCarte2 {

    class Carte
    {
    public:

        Carte(Couleur, const std::string&); //constructeur
        Carte(Carte&); //constructeur - copie
        
        //-> pour heritage : virtual ~Carte();
        virtual ~Carte(); // destructeur

        Carte& operator=(const Carte&);
        bool operator==(const Carte&) const {};
        bool operator!=(const Carte&) const {};

       /*bool operator==(const Carte& c) const {
            std::cerr << "operator==" << std::endl;
            if (&c == this) return true;
            return (this->_couleur == c._couleur &&
                this->_valeur == c._valeur);
        }

        bool operator!=(const Carte& c) const {
            std::cerr << "operator!=" << std::endl;
            if (&c == this) return false;
            return (!(this->operator==(c)));
        }*/

        void setType(Couleur); // setter type
        void setValeur(const std::string&);// setter valeur

        friend std::ostream& operator<<(std::ostream&, Carte&);


    protected:

        Couleur _couleur;
        std::string _valeur;

    };
}
#endif // JeuDeCarte2