#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	int arry[3] = {0};
	int number = 0, i = 0;
	int is_there_an_even_number = 0;
	int is_there_an_odd_number = 0;
	int is_there_an_number_bigger_than_50 = 0;

	srand(time(NULL)); // set diff seed for rand()
	do {
		number = rand() % 100;
		if (number % 2 == 0)
		{
			arry[0] = number;
			is_there_an_even_number = 1;
		}
		else if (number % 2 == 1) 
		{
			arry[1] = number;
			is_there_an_odd_number = 1;
		}
		else if (number > 50) 
		{
			arry[2] = number;
			is_there_an_number_bigger_than_50 = 1;
		}
	} while (
		is_there_an_even_number &&
		is_there_an_odd_number &&
		is_there_an_number_bigger_than_50);
	for (i = 0; i < 3; i++) 
	{
		printf("%d ",arry[i]);
	}
	return 1;
}