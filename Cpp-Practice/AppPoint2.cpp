#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 65001>nul");
    const int size = 12;
    int k;
    char symbs[size];

    char* p;
    char* q;
    p = symbs;
    /*symbs[0]='A';*/
    p[0] = 'A';
    q = &symbs[size - 1];
    cout << "Между первым и последним элементами " << q - p << " позиций\n";
    while (p!=q)
    {
        p++;
        *p = p[-1] + 1;
    }
    cout << "Элементы массива :\n";
    for (k = 0; k < size; k++) {
        cout << symbs[k] << " | ";
    }
    cout << "\nВ обратном порядке :\n";
    for (k = 0; k < size; k++)
    {
        cout << q[-k] << " | ";
    }
    system("pause>nul");
}
