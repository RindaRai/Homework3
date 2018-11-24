#include <stdio.h>
#include <iostream>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "");

	//5
	/*int tf, tc;
start:
	printf("Введите температуру по Фаренгейту: ");
	scanf_s("%d", &tf);
	tc = ((tf - 32) * 5) / 9;
	printf("Температура по Цельсию: %d\n", tc);
	goto start;*/


	//4
	/*int a, a2, a3, a5, a10, a15;
start:
	printf("Введите значение a: ");
	scanf_s("%d", &a);
	a2 = a * a;
	a3 = a2 * a;
	a5 = a3 * a2;
	a10 = a5 * a3*a2;
	a15 = a10*a5;
	printf("a во второй степени: %d\n", a2);
	printf("a в третьей степени: %d\n", a3);
	printf("a в пятой степени: %d\n", a5);
	printf("a в десятой степени: %d\n", a10);
	printf("a в пятнадцатой степени: %d\n", a15);
	goto start;*/
	

	//3
	/*int a8, a2, a4, a;
	start:
	printf("Введите значение a: ");
	scanf_s("%d", &a);
	a2 = a * a;
	a4 = a2 * a2;
	a8 = a4 * a4;
	printf("a во второй степени: %d\n", a2);
	printf("a в четвертой степени: %d\n", a4);
	printf("a в восьмой степени: %d\n", a8);
	goto start;*/


	//2
	/*int x, y, z,f;
	start:
	printf("Введите значение х: ");
	scanf_s("%d", &x);
	z = (x - 3)*(x - 3)*(x - 3)*(x - 3)*(x - 3)*(x - 3);
	f = (x - 3)*(x - 3)*(x - 3);
	y = 4 * z - 7 * f + 2;
	printf("Ответ: %d\n", y);
	goto start;*/


	//1
	/*int x, y;
start:
	printf("Введите значение х: ");
	scanf_s("%d", &x);
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	printf("Ответ: %d\n", y);
	goto start;
*/






	system("pause");





}