#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*check if input is valid and if so calculate the unique digits sum*/
void calculateDigitsSum() {
    char userInput[50],currChar;
    int i,res=0,curr;
    int alreadyThere[10]={0};
    puts("please enter your number");
    fgets(userInput, 250, stdin);
    for (i = 0; i < strlen(userInput) - 1; i++) {
                if (userInput[i] < '0' || userInput[i] > '9') {
                    puts("wrong input");
                    exit(1);
                }
                else{
                    currChar = userInput[i];
                    curr = (int)currChar-'0';
                    if(alreadyThere[curr]){
                        continue;
                    } else{
                        alreadyThere[curr]=1;
                        res+=curr;
                    }
                }
   }
   printf("unique digits sum is %d",res);
}



int main(){
    calculateDigitsSum();
    return 1;
}