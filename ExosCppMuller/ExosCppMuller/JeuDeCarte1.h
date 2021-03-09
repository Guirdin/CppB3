#ifndef DEF_CARTE
#define DEF_CARTE

#include <iostream>
#include <string>


class Carte
{
   enum Couleur { PIQUE = 0, COEUR = 1, CARREAU = 2, TREFLE = 3 };

   public:

        Carte(Couleur, std::string&);
        Carte(Carte&);
        virtual ~Carte();

        void setType(Couleur);
        void setValeur(std::string&);

        void afficher() const {};
        bool equal(Carte&) {};
        void affecter(Carte&);

    protected:

        Couleur _couleur;
        std::string _valeur;

};

#endif