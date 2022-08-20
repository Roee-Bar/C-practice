
#include <stdio.h>

#define ROWS_NUMBER 10
#define COLS_NUMBER 10

int main() 
{
	int matrix[ROWS_NUMBER][COLS_NUMBER] = { 0 };
	int i = 0, j = 0;

	printf("Multiplication table matrix[%d][%d]:\n\n", ROWS_NUMBER, COLS_NUMBER);
	for (i = 0; i < ROWS_NUMBER; i++)
	{
		for (j = 0; j < COLS_NUMBER; j++)
		{
			matrix[i][j] = (i+1) * (j+1);
			printf("%3d ", matrix[i][j]);
		}
		printf("\n");
	}
	return 1;
}