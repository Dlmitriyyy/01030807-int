#include <iostream>
#include <array>
using namespace std;

int main()
{
    system("chcp 1251 > nul");

    array<int, 14> mass1 = { 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377 };
    array<int, 14> mass2;

        cout << "Перший масив: ";

    for (int a = 0; a < mass1.size() - 1; a++)
    {
        mass2[a] = mass1[a + 1] / mass1[a];
        cout << mass1[a] << " ";
    }

        cout << endl << "Другий масив: ";

    for (int a = 0; a < mass2.size() - 1; a++)
    {
        cout << mass2[a] << " ";
    }
    return 0;
}
