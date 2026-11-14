#include <iostream>
#include <cstdlib>

using namespace std;
int main() {
    system("chcp 65001>nul");
    int myNumbers[5];
    int* pointMassiv = myNumbers;
    cout << "pointMassiv - 0x" << hex << pointMassiv << endl;
    cout << "&myNumber - 0x" << hex << &myNumbers[0] << endl;
    system("pause>nul");
}
