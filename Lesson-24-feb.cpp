// Учебный проект для занатия
// от 24 февраля 2023 г.

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    const short SIZE = 10;
    int mas[SIZE]{};
    // Цикл вывода 1-мерного массива
    for (int i = 0; i < SIZE; i++)
        cout << mas[i] << ' ';
    cout << endl;
}
