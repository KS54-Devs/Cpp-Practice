#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    system("chcp 65001>nul");

    int n, s = 0;
    cout << "Введите верхнюю границу: ";
    cin >> n;

    if (n > 0) {
        while (n) {
            s += n * n;
            n--;
        }
        cout << "Сумма квадратов от 1 до " << n << " : " << s << "\n";
    }
    else
    {
        cout << "Баран ты что хочешь. Число должно положительное";
    }
    system("pause>nul");
}
