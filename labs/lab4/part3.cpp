
#include <iostream>

using namespace std;

int main()
{
    int n;

    setlocale(LC_ALL, "Russian");

    cout << "Введите n: " << endl;
    cin >> n;

    int** mass = new int* [n];

    for (int i = 0; i < n; i++)
        mass[i] = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Введите элементы строки №" << i + 1 << ":\n";

        for (int j = 0; j < n; j++)
        {
            cout << "Введите элемент  №" << j + 1 << " (целое число):\n";
            cin >> mass[i][j];
        }
    }

    for (int i = 0; i < n; i++) 
    {
        bool all_even = true;

        for (int j = 0; j < n; j++) 
        {
            if (mass[i][j] % 2 != 0) 
            {
                all_even = false;
                break;
            }
        }

        if (all_even) 
        {
            for (int k = 1; k < n; k++) 
            {
	            const int temp = mass[i][k];

                int j = k - 1;

                while (j >= 0 && mass[i][j] > temp) 
                {
                    mass[i][j + 1] = mass[i][j];
                    j--;
                }

                mass[i][j + 1] = temp;
            }
        }
    }

    cout << endl << "Итоговый массив:\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mass[i][j] << ' ';
        }
        cout << '\n';
    }

    delete[] mass;

    return 0;
}