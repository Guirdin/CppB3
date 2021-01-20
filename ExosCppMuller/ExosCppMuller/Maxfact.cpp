#include "Header.h"

void Maxfact()
{
    cout << "Bienvenue sur le TP 1.8 - Maxfact\n";

    int k, n{ 1 }, i{ 0 };

    cout << "\nVeuillez saisir un entier: ";
    cin >> k;

    while (n <= k) 
    {
        i++;
        n *= i ;
    }
    i--;

    cout << i << "!" << " <= " << k;

}