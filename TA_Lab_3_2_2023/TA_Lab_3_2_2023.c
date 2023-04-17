//TA_Lab_3_2_2023.c Рекурсивні функції. Скількома способами можна вибрати 6 карт з 52, щоб серед них були карти всіх 4 мастей  

#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

long long int Factorial (int N);

int main(void)
{
	//Встановив кодування, підключив Укр. мову
	system("chcp 1251");
	setlocale(LC_CTYPE, "ukr");
	system("cls");

	long double Rez;
		
	printf("\n Програма рахує скількома способами можна вибрати 6 карт з 52, так \n щоб серед них були карти всіх 4 мастей. \n");
	printf("\n Запускаємо рекурсивну функцію!\n");
	
	Rez = 4 * (Factorial(13) / (Factorial(13 - 3)*Factorial(3)))*pow(13, 3) + (Factorial(4) / (Factorial(4 - 2)*Factorial(2))) * pow((Factorial(13) / (Factorial(13 - 2)*Factorial(2))), 2)*pow(13, 2);

	printf("\n Є %.0lf способи обрати 6 карт з колоди згідно умови задачі.\n", Rez);
	printf("\n Рекурсивна функція закінчила роботу. \n Всього Вам найкращого!");
	int getch(); getch();
	return 0;
}

//Функція - з рекурсією

long long int Factorial(int N)
{
	if (N == 0 || N == 1) return 1;
	return N * Factorial(N - 1);
}
