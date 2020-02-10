#include <iostream>
#include <ctime>
#include "owo.h"

using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int num = 0;
	int* pop = new int[10];
	owo eee;
	int e=0;
	
	do {
		system("pause");
		system("cls");
		cout << "Введите номер выбора : " << endl;
		cout << "1)Заполнить.  " << endl;
		cout << "2)Заполнить c файла.  " << endl;
		cout << "3)Вывести.  " << endl;
		cout << "4)Выйти из программы.  " << endl;
		while (!(cin >> e) || (cin.peek() != '\n'))
		{
			cin.clear();
			cin.ignore((numeric_limits<streamsize>::max)(), '\n');
			cout << "Введите цифру от 1 до 4: " << endl;
		}
		switch (e)
		{
		case 1:
		{
			for (int i = 0; i < 10; i++) pop[i] = rand() % 2 + 1;
			for (int i = 0; i < 10; i++) cout << pop[i] << "	" << endl;;
			eee.add(pop);

		};
		break;
		case 2:
		{
			num = eee.print();
			if (num == 0)
			{
				cout << "Номер\t" << "Тип\t" << "Кол-во вагонов" << endl;
			}
			else
			{
				cout << "Поездов нет!" << endl;
			}
		}; break;
		case 3:
		{
			int j,k;
			cout << "Введите номер поезда ";
			while (!(cin >> k) || (cin.peek() != '\n'))
			{
				cin.clear();
				cin.ignore((numeric_limits<streamsize>::max)(), '\n');
				cout << "Некоректные данные, попробуйте снова" << endl;
			}
			j = eee.addfile(k);
			cout << "Всего " << j << " ошибок" << endl;

		}; break;
		case 4:
		{
			return 0;
		}; break;
		default:cout << "Введите цифру от 1 до 4: " << endl;
			break;
		}


	} while (e != 4);
	return 0;
	

}

