#include<iostream>
#include<cstdlib>

using namespace std;
int main() {
    system("chcp 65001>nul");
    char str[100] = "Программируем на С++";
    cout << str << endl;
    for (int k = 0; str[k]; k++)
        cout << str[k] << "_";
    cout << endl;
    for (char* p = str; *p; p++)
        cout << p << endl;
    str[13] = '\0';
    cout << str << endl;
    cout << str + 14<<endl;
    cout << "Раз два три " + 4 << endl;
    const char* q = "Раз два три " + 8;
    cout << q[0] << endl;
    cout << q << endl;

    system("pause>nul");
}
