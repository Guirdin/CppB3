#include "Header.h"

void Syracuse()
{
    int value;
    int iteration = 0;

    cout << "Veuillez saisir un nombre : ";
    cin >> value;
    
    while (value != 1)
    {
        iteration++;

        // we check if initialNumber is pair.
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