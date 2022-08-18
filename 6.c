#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printNumbers(){
    /*generete 3 random numbers and check if they meet the conditions*/
    /* if they are not genertae 3 numbers again untill finding three numbers and print them*/
    int nums[3]={1}, i,curr,odd=0,even=0,big=0;
    srand(time(0));
    while (odd+even+big<3) {
        odd = 0;even = 0; big =0;
        for (i = 0; i < 3; i++) {
            curr = rand() % 101;
            nums[i] = curr;
            if (curr % 2 == 0) {even = 1; }
            if (curr % 2 == 1) { odd = 1; }
            if (curr > 50) { big = 1; }
        }
    }
        printf("your numbers are: ");
        for (i=0;i<3;i++){
            printf ("%d ", nums[i]);
        }
    }

    int main(){
        printNumbers();
        return 1;
    }
