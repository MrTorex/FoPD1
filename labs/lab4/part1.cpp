
#include <iostream>

using namespace std;

int main()
{
    int n, m;
    
    setlocale(LC_ALL, "Russian");

    cout << "Введите n: " << endl;
    cin >> n;

    cout << "Введите m: " << endl;
    cin >> m;

    double** mass = new double*[n];

    for (int i = 0; i < n; i++)
        mass[i] = new double[m];

    for (int i = 0; i < n; i++)
    {
        cout << "Введите элементы строки №" << i + 1 << ":\n";

        for (int j = 0; j < m; j++)
        {
            cout << "Введите элемент  №" << j + 1 << " (рациональное число):\n";
            cin >> mass[i][j];
        }
    }

    bool all_columns_contain_zero = true;

    for (int j = 0; j < m; j++) 
    {
        bool contains_zero = false;

        for (int i = 0; i < n; i++) 
        {
            if (mass[i][j] == 0) 
            {
                contains_zero = true;
                break;
            }
        }
        if (!contains_zero) 
        {
            all_columns_contain_zero = false;
            break;
        }
    }

    if (all_columns_contain_zero) 
    {
        cout << "Все столбцы содержат хотя бы один нулевой элемент.\n";

        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < m; j++) 
            {
                if (mass[i][j] == 0) 
                {
                    mass[i][j] = 1;
                }
            }
        }
    }
    else 
    {
        cout << "Не все столбцы содержат хотя бы один нулевой элемент.\n";
    }

    cout << endl << "Итоговый массив:\n";

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cout << mass[i][j] << ' ';
        }
        cout << '\n';
    }

    delete[] mass;

    return 0;
}