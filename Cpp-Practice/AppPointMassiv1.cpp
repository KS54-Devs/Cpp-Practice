#include<iostream>
#include<cstdlib>

using namespace std;
int main() {
    system("chcp 65001>nul");
    const int ARRAY_LEN = 5;
    int myMassiv[ARRAY_LEN] = { 24,-1,365,-999,2011 };
    int* poointMas = myMassiv;

    for (int index = 0; index < ARRAY_LEN; index++ ) {
        cout << "Элемент " << index << " = " << poointMas[index] << endl;
    }

    system("pause>nul");
}
