#include "PointMass.h"

int* randMass(int* mass, int size) {
    for (int i = 0; i < size; i++)
        mass[i] = rand() % 10;
    return mass;
}
