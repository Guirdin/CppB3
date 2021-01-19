#include "Header.h"

void DeveloppementLimites() {

    double X;
    cout << "\nVeuillez saisir une valeur X: ";
    cin >> X;

    double resultat, R = X * X, S = 42.0;

    int I = X * X + 10;

    for (I; I >= 1; I--)
    {
        S = 4.0 * I - 2.0 + (-R) / S;
    }
    resultat = 2.0 * X * S / (R + S * S);

    cout << "\nLe sinus de X = " << resultat;
    cout << "Sinus = " << sin(X);
}