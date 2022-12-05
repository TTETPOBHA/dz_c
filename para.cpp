#include <iostream>
#include "Структура-пара.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	float cost = 2.99;
	int num = 20;

	//
	Products prod(cost, num);

	//элемент класса 
	prod.display(prod);
	
	//копирование
	Products prod1(prod);

	//создание элемента класса 
	prod1.read(prod1);

	//
	prod1.display(prod1);

	//стоимость
	prod.cost(prod1);
}
