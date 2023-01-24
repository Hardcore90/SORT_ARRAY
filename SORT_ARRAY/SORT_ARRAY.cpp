#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	printf("Введите кол-во элементов: ");
	int n;
	scanf("%i", &n);
	int array[100];
	printf("Введите %i элементов массива: \n", n);

	for (int i = 0; i < n; i++)   // Заполняем массив
	{
		scanf("%i", &array[i]);
	}

	for (int i = 0; i < n; i++)   // Выводим изначальный массив
	{
		printf("%4i", array[i]);
	}
	printf("\n");

	for (int i = 0; i < n; i++)    // Сортируем массив
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)   // Выводим отсортированный массив
	{
		printf("%4i", array[i]);
	}
}