#include <iostream>
#include <cstdlib>
#include "MilFutKM_MilFutKM.h" // Название заголовочного файла должно совпадать с настоящим именем файла
using namespace std;

int main() {
    system("chcp 65001>nul");
    calculateDistance();

    int dMile, dFt;  // Мили и футы (вводит пользователь)
    cout << "Расстояние в милях и футах." << endl;
    cout << "Мили: ";
    cin >> dMile;
    cout << "Футы: ";
    cin >> dFt;

    // Переводим всё в мили (футы делим на количество футов в миле)
    double distMile = dMile + (double)dFt / ftInMile;
    // Переводим мили в километры
    double distKm = distMile * kmInMile;
    // Целая часть - это километры, дробную часть переводим в метры
    int dKm = (int)distKm;
    int dMeters = (int)((distKm - dKm) * 1000);

    cout << "Расстояние в километрах и метрах." << endl;
    cout << "Километры: " << dKm << endl;
    cout << "Метры: " << dMeters << endl;
    system("pause>nul");
    return 0;
}

// Функция из заголовочного файла (пока просто возвращает число 10)
int calculateDistance() {
    return 10;
}
