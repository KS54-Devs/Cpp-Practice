#include<iostream>
#include<cstdlib>

using namespace std;
int main() {
    system("chcp 65001>nul");
    int num;
    int& ref = num;

    num = 1000;
    cout << "num " << num << endl;
    cout << "ref " << ref << endl;
    ref = 2000;
    cout << "num " << num << endl;
    cout << "ref " << ref << endl;
    system("pause>nul");
}
