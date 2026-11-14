#include <iostream>
#include <cstdlib>
#include "ConvertMilFut.h"

using namespace std;

int Milkm(string str)
{
    int dist;
    cout << str << " : ";
    cin >> dist;
    return (int)dist;
}
double MileIn(int mile, int fut)
{
    return (double)mile + (double)(fut / fitMile);
}
double KmIn(double mil)
{
    return mil * fitKm;
}
int Km(double kmk)
{
    return (int)kmk;
}
int Met(double kmk) {
    return (int)((kmk - (int)kmk)*1000);
}
int main() {
    system("chcp 65001>nul");
    double kmMet = KmIn(MileIn(Milkm("Введите Мили :"), Milkm("Введите Футы :")));
    cout << "Значение в км : " << Km(kmMet);
    cout << "Значение в метр : " << Met(kmMet);
    system("pause>nul");
    return 0;
}
