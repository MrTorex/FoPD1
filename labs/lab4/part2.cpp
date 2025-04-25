
#include <iostream>

using namespace std;

int main()
{
    int n, m, column_number = -1;

    double t, sum = 0;

    setlocale(LC_ALL, "Russian");

    cout << "Введите n: " << endl;
    cin >> n;

    cout << "Введите m: " << endl;
    cin >> m;

    double** mass = new double* [n];

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

    cout << "Введите t: " << endl;
    cin >> t;

    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) 
            sum += mass[i][j];

    const double average = sum / (n * m);

    for (int j = 0; j < m; j++) 
    {
        bool all_elements_match_condition = true;

        for (int i = 0; i < n; i++) 
        {
            if (!(mass[i][j] < t || mass[i][j] > average)) 
            {
                all_elements_match_condition = false;
                break;
            }
        }

        if (all_elements_match_condition) 
        {
            column_number = j;
            break;
        }
    }

    if (column_number != -1) 
    {
        cout << "Номер столбца: " << column_number + 1;
    }
    else {
        cout << "Такого столбца не найдено.";
    }

    delete[] mass;

    return 0;
}