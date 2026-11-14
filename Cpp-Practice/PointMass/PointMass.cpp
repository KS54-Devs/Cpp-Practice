#include "PointMass.h"

int main() {
    int ssize = 0;
    cin >> ssize;

    if (ssize <= 0) {
        return 1;
    }

    int* massive = new int[ssize];

    for (int f = 0; f < ssize; f++) {
        massive[f] = f;
    }

    for (int f = 0; f < ssize; f++) {
        cout << setw(3) << massive[f];
    }
    cout << endl;

    delete[] massive;

    system("pause>nul");
    return 0;
}
