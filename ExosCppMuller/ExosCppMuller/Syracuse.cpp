#include "Header.h"

void Syracuse()
{
    cout << "\nBienvenue sur le TP 1.4 - Syracuse\n";
    cout << "\nRegles: pour tout entier N > 0, il existe un indice N tel que uN = 1\n";

    int value, iteration{ 0 };

    cout << "Suite de Syracuse pour N = ";
    cin >> value;
    
    while (value != 1)
    {
        iteration++;

        if (value % 2 == 0)
        {
            value = value / 2;
        }
        else
        {
            value = 3 * value + 1;
        }

        cout << "U" << iteration << " = " << value << "\n";
    }
}