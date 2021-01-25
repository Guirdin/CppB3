#include "Header.h"

void NombreMystere()
{
    int nbMystere, max, min, coups{ 0 }, nombre;
    cout << "\nBienvenue sur le TP 1.1 - Nombre mystere\n";

    cout << "\nRegles: Trouver le nombre compris entre -N et N";
	cout << "\nVeuillez choisir la valeur de N : ";
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
            coups++;
            cout <<"\nC'est plus";
            
        }

        else
        { 
            coups++;
            cout <<"\nC'est moins";
        }
    } while (true);
}