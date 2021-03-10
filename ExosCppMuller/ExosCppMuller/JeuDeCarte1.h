#ifndef DEF_CARTE1
#define DEF_CARTE1

#include <iostream>
#include <string>

namespace JeuDeCarte1 {

    class Carte
    {
    public:
        enum Couleur { PIQUE = 0, COEUR = 1, CARREAU = 2, TREFLE = 3 };

        Carte(Couleur, const std::string&); //constructeur
        Carte(Carte&); //constructeur - copie
        ~Carte(); // destructeur

        void setType(Couleur); // setter type
        void setValeur(const std::string&);// setter valeur

        //-> pour heritage : virtual void afficher() const
        virtual void afficher() const;
        bool equal(Carte&);
        void affecter(Carte&);

    protected:

        Couleur _couleur;
        std::string _valeur;

    };
}
#endif // JeuDeCarte1
