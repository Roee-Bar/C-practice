#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void print_serris_elemnts(int a_0,int q,int num);

int main() 
{
	int a_0 = 0, q = 0 ,num = 0;
	printf("Input first element in series - a_0: ");
	scanf("%d", &a_0);
	printf("Input series ratio - q: ");
	scanf("%d", &q);
	printf("Input number of elemnts to display - num: ");
	scanf("%d", &num);

	print_serris_elemnt(a_0, q, num);

	return 1;
}

void print_serris_elemnts(int a_0, int q, int num) 
{
	do 
	{
		printf("%d ", a_0);
		a_0 *= q;
		num -= 1;
	} while (num);
	
}