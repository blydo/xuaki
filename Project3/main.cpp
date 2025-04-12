#include <iostream>

int main()
{
	
	//тип данных | Ќазвание | ѕриравнивание 
	int xui = 1;
	int xua = 2;
	int zop = 5;

	float xyaka = 2.5;
	float num = 1.6;
	float vin = 3.6;

	double shopa = 3.19283746;
	double zov = 8.737737373;
	double zov2 = 7.1234567;
/*
	if (zop < 4) {
		std::cout << zop;
	} 
	else {
		zop--;
	}
	if (zop < 4) {
		std::cout << zop;
	}
	else {
		zop--;
	}

	if (zop < 4) {
		std::cout << zop;
	}
	else {
		zop--;
	}
	*/
	
	// цикл for
	/*for (int i = 0; i < 3; i++)
	{
		if (zop < 4) {
			std::cout << zop;
		}
		else {
			zop--;
		}
	}
	*/
	//цикл while
/*	int i = 0;
	while (i < 3)
	{
		if (zop < 4) {
			std::cout << zop;
		}
		else {
			zop--;
		}
		i++;
	}
	*/
	// —оздать или вз€ть существующую переменную и с помощью цикла вывести ее когда она будет равна 5 | изначально она не равна 5
	// входные данные 
	// i = 0, xua = 2, zop = 5
	for (int i = 0; i < 5; i++)
	{// одинарное равно - это присваивание | == это сравнение
		if (xua == 6) {
			std::cout << xua;
		}
		else {
			std::cout << zop << "\n";
			xua++;
		}
	}
	int i = 0;
	while (i < 4) {
		std::cout << xua << "\n";
		i++;
	}
	while (true)
	{
		std::cout << xua;
		break;
	}

}