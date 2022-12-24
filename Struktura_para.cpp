#include <iostream>
#include "Структура-пара.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	float cost = 2.99;
	int num = 20;

	//инициализация
	Products prod(cost, num);

	prod.display(prod);
	
	//копирование
	Products prod1(prod);

	//создание эллемента класса
	prod1.read(prod1);

	//вывод
	prod1.display(prod1);

	//стоимость
	prod.cost(prod1);
}
