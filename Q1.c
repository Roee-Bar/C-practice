#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    /*name: main
    input: 2 floats
    output: int
    Description: prints BMI calculations according to inputed height and weight data from user*/
    float h = 0, w = 0;
    printf("Please enter your height in m and weight in kg:");
    scanf("%f %f", &h, &w);
    printf("your height is: %.2f\n", h);
    printf("your weight is: %.2f\n", w);
    printf("your BMI is : %.2f", w/(h*h));

    return 0;
}
