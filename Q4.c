#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define DIGITS 10

int get_int_number_from_user();
void print_number_diffrent_sum_of_digits(int number);

int main()
{
	print_number_diffrent_sum_of_digits(get_int_number_from_user());
	return 1;
}

void print_number_diffrent_sum_of_digits(int number) 
{
	int digits_array_of_counter[DIGITS] = { 0 };
	int i = 0, j = 0;

	while (number)
	{
		digits_array_of_counter[number % 10] += 1;
		number = number / 10;
	}

	for (i = 0; i < DIGITS; i++) 
	{
		if (digits_array_of_counter[i] != 0) {
			for (j = i; j < DIGITS; j++)
			{
				if (digits_array_of_counter[j] != 0) 
				{
					printf("%d + %d = %d\n", i, j, i + j);
				}
			}
		}
	}
} 

int get_int_number_from_user()
{
	int number;
	printf("Input integer number: ");
	scanf("%d", &number);
	return number;
		
}
