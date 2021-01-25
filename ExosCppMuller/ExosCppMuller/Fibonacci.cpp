#include "Header.h"

void Fibonacci()
{
    int f0, f1, iterator;

    cout << "\nBienvenue sur le TP 1.6 - Fibonacci\n";
    cout << "\nLe nombre de Fibonacci F(n) est defini comme suit :";
    cout << "\nF(n) = F(n - 1) + F(n - 2)\n";

    cout << "\nVeuillez saisir une valeur F(0): ";
    cin >> f0;

    cout << "\nVeuillez saisir une valeur F(1): ";
    cin >> f1;

    cout << "\nVeuillez saisir un nombre d'iteration: ";
    cin >> iterator;

    cout << "\nF(0) = " << f0;
    cout << "\nF(1) = " << f1;

    for (int i{ 0 }; i < iterator; i++)
    {
        int resultat = f0 + f1;
        int iteration = i + 2;
        cout << "\nF(" << iteration << ")" << " = " << resultat;
        f0 = f1;
        f1 = resultat;
    }
}
