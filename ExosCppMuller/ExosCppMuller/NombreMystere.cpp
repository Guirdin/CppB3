#include "Header.h"

void NombreMystere()
{
	int nbMystere, max, min, coups, nombre;

	cout << "Bienvenue sur le TP 1.1 - Nombre Mystere\n";
    

	cout << "Veuillez siaisr la valeur de x: ";
	cin >> max;
	min = -max;
	cout << "\n";

	cout << "\n max"<< max;
	cout << "\n min" << min;

	nbMystere = random(min,max);
    cout << "\n nombre Mystere = " << nbMystere;


    do // Boucle qui permet de relancer le jeu tant que le nombre n'est pas trouver
    {
        cout <<"\nVeuillez saisir un nombre: ";
        cin >> nombre;

        if (nombre == nbMystere)
        {
            coups++;
            cout <<"Vous avez réussis en " << coups << " coups";
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

	cout << nbMystere;
}