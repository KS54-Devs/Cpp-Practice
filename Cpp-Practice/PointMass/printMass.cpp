#include "PointMass.h"

void printMass(const int* mass, int size)
{
    for (int k = 0; k < size; k++)
        cout << setw(4) << mass[k];
    cout << endl;
}
