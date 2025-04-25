
#include <iostream>
#include <string>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");

	string n;

	cout << "Задача 12. Найти какая из цифр в числе N встречается наибольшее количество раз." << endl;

	cout << "Введите число N: " << endl;
	cin >> n;

	{
		int* values = { new int[10] {} };

		for (int i = 0; i < n.size(); i++)
		{
			switch (n[i])
			{
			case '0':
				values[0]++;
				break;
			case '1':
				values[1]++;
				break;
			case '2':
				values[2]++;
				break;
			case '3':
				values[3]++;
				break;
			case '4':
				values[4]++;
				break;
			case '5':
				values[5]++;
				break;
			case '6':
				values[6]++;
				break;
			case '7':
				values[7]++;
				break;
			case '8':
				values[8]++;
				break;
			case '9':
				values[9]++;
				break;
			}
		}

		{
			int a = 0;

			int val = 0;

			for (int j = 0; j < 10; j++)
			{
				if (values[j] > val)
				{
					val = values[j];

					a = j;
				}
			}

			cout << "Чаще всего встречающаяся цифра: " << a;
		}
	}
}
