#include "PointFunc.h"

void CalcArea(const double* const PPi, const double* const pRadius, double* const pArea) {
    if (PPi && pRadius && pArea)
    {
        *pArea = (*PPi) * (*pRadius) * (*pRadius);
    }
}