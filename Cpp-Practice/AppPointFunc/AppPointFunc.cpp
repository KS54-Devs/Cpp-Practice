#include"AppPoint.h"
int main() {
    system("chcp 65001>nul");

    const double Pi = 3.1416;
    cout << "Введите адрес круга : ";
    double radius;
    cin >> radius;
    cout << "Площадь равна " << CalcArea(&Pi, &radius) << endl;
    system("pause>nul");
}
