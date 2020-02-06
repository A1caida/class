#include <iostream>
#include <ctime>
#include "owo.h"

using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int num;
	int* pop = new int[10];
	
	owo eee;
	for (int i = 0; i < 2; i++)
	{
		cout << "Номер поезда" << endl;
		cin >> num;
		eee.add(num);
	
	}
	eee.print();
	eee.print();
	eee.print();
	eee.print();
}

