#include "Header.h"

void DeveloppementLimites()
{
    int choix{ 0 };
    double X, resultat;

    cout << "\nBienvenue sur le TP 1.7 - Developpement limites\n";

    cout << "\nPour le Sinus tapez (1)";
    cout << "\nPour le Cosinus tapez (2)";
    cout << "\nPour le Tangente tapez (3)\n";

    do {
        cout << "\nVeuillez choisir un programme: ";
        cin >> choix;
    } while (choix != 1 && choix != 2 && choix != 3);

    cout << "\nVeuillez saisir la valeur X: ";
    cin >> X;

    double R { X * X}, S{ 1 }, I{ X * X + 10 };

    for (I; I >= 1; I--)
    {
        S = 4.0 * I - 2.0 + (-R) / S;
    }

    switch (choix)
    {
    case 1:

        resultat = 2.0 * X * S / (R + S * S);

        cout << "\nLe sinus de X:";

        cout << "\nDu programme = " << resultat;
        cout << "\nDe la fonction math = " << sin(X);
        break;
    case 2:

        S *= S;
        resultat = (S - R) / (S + R);

        cout << "\nLe cosinus de X:";

        cout << "\nDu programme = " << resultat;
        cout << "\nDe la fonction math = " << cos(X);
        break;
    case 3:

        double sinus = 2.0 * X * S / (R + S * S);
        S *= S;
        double cosinus = (S - R) / (S + R);
        resultat = sinus/cosinus;

        cout << "\nLa tangente de X:";

        cout << "\nDu programme = " << resultat;
        cout << "\nDe la fonction math = " << tan(X);
        break;
    }
}