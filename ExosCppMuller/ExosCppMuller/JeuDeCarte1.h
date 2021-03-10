#ifndef DEF_CARTE
#define DEF_CARTE

#include <iostream>
#include <string>

namespace Partie3 {
    class Carte
    {
       public:
            enum Couleur { PIQUE = 0, COEUR = 1, CARREAU = 2, TREFLE = 3 };

            Carte( Couleur, const std::string&); //constructeur
            Carte(Carte&); //constructeur - copie
            virtual ~Carte(); // destructeur

            void setType(Couleur); // setter type
            void setValeur(const std::string&);// setter valeur

            void afficher() const ;
            bool equal(Carte&) ;
            void affecter(Carte&);

        protected:

            Couleur _couleur;
            std::string _valeur;

    };
}
#endif
