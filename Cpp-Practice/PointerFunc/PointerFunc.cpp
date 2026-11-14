#include "PointFunc.h"

int main() {
    system("chcp 65001>nul");
    const double Pi = 3.1416;
    cout << "Введите радиус круга - ";
    double radius;
    cin >> radius;
    double area = 0;
    CalcArea(&Pi, &radius, &area);

    cout << "Площадь круга равна - " << area << endl;
    system("pause>nul");
}