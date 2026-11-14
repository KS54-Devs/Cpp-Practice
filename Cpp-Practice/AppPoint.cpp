#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 65001>nul");
    char symb;
    int num;
    char* p;
    int* q;
    p = &symb;

    q = &num;
    *p = 'A';
    *q = 10000;
    cout << "symb = " << hex<<p<< endl;
    cout << "num = " <<hex<<q << endl;
    system("pause>nul");
}
