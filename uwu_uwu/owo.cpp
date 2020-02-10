#include <iostream>
#include <ctime>
#include <fstream>
#include <string>

#include "owo.h"

using namespace std;
struct poezd
{
	int num; //номер(может совпадать наверное(тип из одного состава разделили(я хз)))
	int type;//тип вагонов(ну тут я думаю понятно)
	int vagon; //кол-во вагонов одного типа.
	poezd* next;
};
poezd* root = NULL;

owo::owo()
{
}

void owo::add(int* pop)
{
	srand(time(NULL));
	poezd* c = new poezd;
	int num = rand() % 100 + 1;
	int b = 0; int t = 0;
	for (int i = 0; i < 10; i++)
	{
		if (pop[i]==1)
		{	b++;	}
		else
		{	t++;	}
	}
	c->type = 1; c->num = num; c->vagon = b; c->next = root; root = c;

	poezd* a = new poezd;
	a->type = 2; a->num = num; a->vagon = t; a->next = root; root = a;
}

int owo::addfile(int k)
{
	poezd* c = new poezd;
	ifstream file; string a;
	int b = 0; int t = 0; int error = 0;
	file.open("C:\\Users\\A1caida\\Desktop\\class-master\\owo.txt", ios::out);
	if (!file)	return 1;
	c->num = k;
	while (getline(file, a, ' '))
	{
		if (a == "1") { b++; }
		else  if (a == "2") { t++; }
		else { error++; }
	}
	c->type = 1; c->vagon = b; c->next = root; root = c;
	poezd* r = new poezd;
	r->type = 2; r->num = c->num; r->vagon = t; r->next = root; root = r;
	return error;
}

int owo::print() {

	poezd* c = root;
	setlocale(LC_ALL, "Russian");
	if (c == 0)	return 1;

	while (c != 0) 
	{
		cout << c->num << "\t";
		cout << c->type << "\t";
		cout << c->vagon << endl;
		c = c->next;
		del();
	}
	return 0;
	
}



void owo::del()
{
	poezd* c = root;
	root = root->next;
	delete c;
	
}

owo::~owo()
{
}
