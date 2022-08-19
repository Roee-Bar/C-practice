#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define STRING_SIZE 500
int get_number();
int check_number(char *s_number);
void cal_factorial(int number);

int main()
{
    int number = 0;
    char check = 'y';
    while (check == 'y') {
        number = get_number();
        cal_factorial(number);
        //need to fix loop to input more numbers
        printf("input 'y' for another cal:");
        scanf("%c",&check);
    }
    return 0;
}
int get_number()
{
    char char_number [STRING_SIZE];
    do 
    {
        printf("input positiv integer number: ");
        scanf("%s", &char_number);
    } while (check_number(char_number));
    return atoi(char_number);
}
int check_number(char *char_number)
{
    int i = 0;
    for (i = 0; i < strlen(char_number); i++) {
        if (!(char_number[i] >= '0' && char_number[i] <= '9')) {
            printf("error\n");
            return 1;
        }
    }
    return 0;
}
void cal_factorial(int number) 
{
    int sum = 1;
    printf("%d!=", number);
    while(number > 1) 
    {
        printf("%d", number);
        if (number > 1)
            printf("*");
        sum *= number;
        number--;
    }
    printf("=%d\n", sum);
}
