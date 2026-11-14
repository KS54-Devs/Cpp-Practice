#include<iostream>
#include<cstdlib>

using namespace std;
int main() {
    system("chcp 65001>nul");
    int myNumber[5];
    int* pointMass = myNumber;
    cout << "pointMass - 0X" << hex << &pointMass << endl;
    cout << "&myMass[0] - 0X" << hex << &myNumber[0] << endl;

    system("pause>nul");

}
