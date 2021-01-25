#include "Header.h"

void Maxfact()
{
    int k, n{ 1 }, i{ 0 };

    cout << "\nBienvenue sur le TP 1.8 - Maxfact\n";
    cout << "\nRegles: calcule le plus grand entier n tel que n! <= k\n";

    cout << "\nVeuillez saisir la valeur de k: ";
    cin >> k;

    while (n <= k) 
    {
        i++;
        n *= i;
    }
    i--;
    cout << i << "!" << " <= " << k;
}