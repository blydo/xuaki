#include <iostream>

int main()
{
	
	//��� ������ | �������� | ������������� 
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
	
	// ���� for
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
	//���� while
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
	// ������� ��� ����� ������������ ���������� � � ������� ����� ������� �� ����� ��� ����� ����� 5 | ���������� ��� �� ����� 5
	// ������� ������ 
	// i = 0, xua = 2, zop = 5
	for (int i = 0; i < 5; i++)
	{// ��������� ����� - ��� ������������ | == ��� ���������
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