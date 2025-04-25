
#include <iostream>

using namespace std;

int main()
{
    int n, k, p, krat_k, krat_p, temp;
    setlocale(LC_ALL, "Russian");

    cout << "Введите n: " << endl;
    cin >> n;

    int* a = new int[n];

    cout << "Введите k: " << endl;
    cin >> k;

    cout << "Введите p: " << endl;
    cin >> p;

    for (int i = 0; i < n; i++)
    {
        cout << "Введите элемент массива №" << i + 1 << ": " << endl;
        cin >> a[i];
    }

    cout << "Изначальный массив: ";

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] % k == 0)
            krat_k = i;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] % p == 0)
        {
            krat_p = i;
            break;
        }
    }

    temp = a[krat_k];

    a[krat_k] = a[krat_p];

    a[krat_p] = temp;

    cout << endl << "Итоговый массив: ";

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    delete[] a;

    return 0;
}
