#include <stdio.h>
#include <iostream>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "");

	//5
	/*int tf, tc;
start:
	printf("������� ����������� �� ����������: ");
	scanf_s("%d", &tf);
	tc = ((tf - 32) * 5) / 9;
	printf("����������� �� �������: %d\n", tc);
	goto start;*/


	//4
	/*int a, a2, a3, a5, a10, a15;
start:
	printf("������� �������� a: ");
	scanf_s("%d", &a);
	a2 = a * a;
	a3 = a2 * a;
	a5 = a3 * a2;
	a10 = a5 * a3*a2;
	a15 = a10*a5;
	printf("a �� ������ �������: %d\n", a2);
	printf("a � ������� �������: %d\n", a3);
	printf("a � ����� �������: %d\n", a5);
	printf("a � ������� �������: %d\n", a10);
	printf("a � ����������� �������: %d\n", a15);
	goto start;*/
	

	//3
	/*int a8, a2, a4, a;
	start:
	printf("������� �������� a: ");
	scanf_s("%d", &a);
	a2 = a * a;
	a4 = a2 * a2;
	a8 = a4 * a4;
	printf("a �� ������ �������: %d\n", a2);
	printf("a � ��������� �������: %d\n", a4);
	printf("a � ������� �������: %d\n", a8);
	goto start;*/


	//2
	/*int x, y, z,f;
	start:
	printf("������� �������� �: ");
	scanf_s("%d", &x);
	z = (x - 3)*(x - 3)*(x - 3)*(x - 3)*(x - 3)*(x - 3);
	f = (x - 3)*(x - 3)*(x - 3);
	y = 4 * z - 7 * f + 2;
	printf("�����: %d\n", y);
	goto start;*/


	//1
	/*int x, y;
start:
	printf("������� �������� �: ");
	scanf_s("%d", &x);
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	printf("�����: %d\n", y);
	goto start;
*/






	system("pause");





}