#include <iostream>
#include <cstdlib>
#include "Massiv.h"

int main() {
    system("chcp 65001>nul");
    int massiv[numb]{};
    for (int k = 0; k < 20; k++)
    {
        massiv[k] = 0;
    }
    int m = 0;
    while (m < numb)
    {
        cout << massiv[m] << endl;
        m++;
    }
    MyFunc();
    system("pause>nul");
}
