
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int l, n, s=0, p=1;

    setlocale(LC_ALL, "Russian");

    cout << R"(Задача 12. Дана последовательность ai = i^3 – 3i, номера её первого и последнего членов 1 и n. Найдите сумму S и произведение P тех ее членов, номера которых кратны 3.)" << endl;

    cout << "Введите номер первого члена l: " << endl;
    cin >> l;

    cout << "Введите номер последнего члена n: " << endl;
    cin >> n;

    for(l; l<=n; l++)
    {
	    if (l%3==0)
	    {
            s += pow(l, 3) - 3 * l;

            p *= pow(l, 3) - 3 * l;
	    }
    }

    cout << "Сумма: " << s << endl;

    cout << "Произведение: " << p << endl;

    system("pause");

    return 0;
}
