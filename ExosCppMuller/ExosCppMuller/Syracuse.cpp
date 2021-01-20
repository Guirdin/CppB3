#include "Header.h"

void Syracuse()
{
    cout << "Bienvenue sur le TP 1.4 - Syracuse\n";

    int value, iteration{ 0 };

    cout << "Veuillez saisir un nombre : ";
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