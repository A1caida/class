#include <iostream>
#include <ctime>
#include "owo.h"
using namespace std;
struct poezd
{
	int* x = new int[10];
	int b;
	poezd* next;


};
poezd* root = 0;

owo::owo()
{
}

void owo::add(int a)
{
	srand(time(NULL));
	poezd* c = new poezd;
	c->b = a;
	for (int i = 0; i < 10; i++)
	{
		c->x[i] = rand() % 2 + 1;

	}
	c->next = root;
	root = c;
	
}
void owo::print() {

	poezd* c = root;
	while (c != 0) {
		cout << endl;
		cout << c->b << endl;
		for (int i = 0; i < 10; i++)
		{
			cout << c->x[i] << "	";
		}
		
		c = c->next;
	}
}
owo::~owo()
{
}
