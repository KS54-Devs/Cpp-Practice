#include"DinamicMemory.h"

int main() {
    system("chcp 65001>nul");
    int* pointToAnInt = new int;
    int* pointNoNums = new int[10];
    cout << "Введите возраст собаки :";
    cin >> *pointToAnInt;
    cout << "Возраст " << *pointToAnInt << " хранится по адресу 0x" << hex << pointToAnInt << endl;
    system("pause>nul");

    cout << "Введите размер массива - ";
    int numEnter = 0;
    cin >> numEnter;
    int* myNumber = new int[numEnter];
    cout << "Выделена память по адресу :0X" << myNumber << hex << endl;

    delete[] myNumber;
    delete pointToAnInt;
    delete[] pointNoNums;

}
