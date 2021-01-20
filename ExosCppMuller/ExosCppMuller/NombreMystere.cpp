#include "Header.h"

void NombreMystere()
{
    cout << "Bienvenue sur le TP 1.1 - Nombre mystere\n";
    int nbMystere, max, min, coups{ 0 }, nombre;
    
	cout << "Veuillez siaisr la valeur de x: ";
	cin >> max;

	min = -max;
	nbMystere = random(min,max);

    do // Boucle qui permet de relancer le jeu tant que le nombre n'est pas trouver
    {
        cout <<"\nVeuillez saisir un nombre: ";
        cin >> nombre;

        if (nombre == nbMystere)
        {
            coups++;
            cout <<"\nFelicitation vous avez reussis en " << coups << " coups";
            break;
        }

        if (nombre < nbMystere)
        {
            cout <<"\nC'est plus";
            coups++;
        }

        else
        {
            cout <<"\nC'est moins";
            coups++;
        }

    } while (true);
}