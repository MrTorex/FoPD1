
#include <iostream>

using namespace std;

int main()
{
    int n, t, max, max_number = 0, zameny = 0;
    setlocale(LC_ALL, "Russian");

    cout << "Введите n: " << endl;
    cin >> n;

    int* mass = new int[n];

    cout << "Введите t: " << endl;
    cin >> t;

    for (int i = 0; i < n; i++)
    {
        cout << "Введите элемент массива №" << i + 1 << ": " << endl;
        cin >> mass[i];
    }

    max = mass[0];

    cout << "Изначальный массив: ";

    for (int i = 0; i < n; i++)
    {
        cout << mass[i] << " ";
    }

    for (int i = 0; i < n; i++)
    {
        if (mass[i] > max)
        {
            max = mass[i];
            max_number = i;
        }

        if (mass[i] > t)
        {
            mass[i] = n;
            zameny++;
        }
    }

    if (max <= t)
        zameny++;

	mass[max_number] = max_number * max_number;

    cout << endl << "Итоговый массив: ";

    for (int i = 0; i < n; i++)
    {
        cout << mass[i] << " ";
    }

    cout << endl << "Количество замен: " << zameny;

    delete[] mass;

    return 0;
}
