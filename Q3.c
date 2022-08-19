#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define STRING_SIZE 500


void print_triangular(int number);
int get_int_number_from_user();
int user_input_is_int(char* char_number);

int main(){
    print_triangular(get_int_number_from_user());
    return 1;
}

void print_triangular(int rows_number) 
{
    int cols_number = 1, stars_number = 0;
    for(cols_number = 1; cols_number <= rows_number; cols_number ++)
    {
        for (stars_number = 1; stars_number <= cols_number; stars_number++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int get_int_number_from_user() 
{
    char char_number[STRING_SIZE];
    do
    {
        printf("Input integer number: ");
        scanf("%s", &char_number);
    } while (user_input_is_int(char_number));
    return atoi(char_number);
}
int user_input_is_int(char* char_number)
{
    int i = 0;
    for (i = 0; i < strlen(char_number); i++) {
        if (!(char_number[i] >= '0' && char_number[i] <= '9')) {
            printf("Input is not an integer number\n");
            return 1;
        }
    }
    return 0;
}
