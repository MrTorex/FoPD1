
#include <iostream>

using namespace std;

int main()
{
    int n;
    setlocale(LC_ALL, "Russian");

    cout << "Введите n: " << endl;
    cin >> n;

    int* a = new int[n];

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
        for (int j = 0; j < n-1; j++) 
        {
            if (a[j] < a[j + 1])
            {
	            int temp = 0;
            	temp = a[j];
            	a[j] = a[j + 1];
            	a[j + 1] = temp;
            }
        }
    }

    cout << endl << "Итоговый массив: ";

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    delete[] a;

    return 0;
}
