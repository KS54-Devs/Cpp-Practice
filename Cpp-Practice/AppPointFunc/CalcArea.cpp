double CalcArea(const double* const pPi, //Константный указатель на константные данные :
    const double* const pRadius)          // ничего не может быть изменено
{
    //Проверка корректности указателя перед использованием
    if (pPi && pRadius)
    {
        return (double)(*pPi) * (*pRadius) * (*pRadius);
    }
}
