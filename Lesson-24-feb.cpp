// Учебный проект для занатия
// от 24 февраля 2023 г.

#include <iostream>
using std::cout;
using std::endl;

void show_prog(int start, int step, int size) {
    int i, x;
    for (i = 0, x = start; i < size; i++, x += step)
        cout << x << ' ';
    return 0;
}

int main()
{
    show_prog(0, 5, 10);
}
