#include<iostream>
#include<cstdlib>

using namespace std;
int main() {
    system("chcp 65001>nul");
    int original = 30;
    int& ref = original;
    cout << "original - " << original << endl;
    cout << "Адрес ref - " << hex << &ref << endl;

    int& ref2 = ref;
    cout << "Адрес ref2 - " << hex << &ref2 << endl;
    cout << "ref2 - " << dec << ref2 << endl;

    system("pause>nul");
}
