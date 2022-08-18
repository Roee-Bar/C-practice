#include <stdio.h>
#include <string.h>



int isPassValid(char* str) {
    /*gets password string and check if it meets all conditions 
     * return 1 if password is valid else 0*/
    int digit =0,upper=0,lower=0,j,i;
    char checkDup[8]={' '},curr;
    /*check if password is in the right length*/
    if ( (strlen(str) - 1)<6 || ( strlen(str) - 1)>8){return 0;}
    /*check if password contains all necessary chars*/
    for (i = 0; i < strlen(str)-1; i++) {
        curr = str[i];
        if (curr >= '0' && curr <= '9') {digit =1;}
        if (curr >= 'a' && curr <= 'z') {lower =1;}
        if (curr >= 'A' && curr <= 'Z') {upper =1;}
        /*check for duplicates*/
        for(j=0;j<=i;j++) {if (curr==checkDup[j]){return 0;}}
        checkDup[i] = curr;
    }
    return digit&&upper&&lower;
}

int passWord() {
    /*gets input from the user and pass isPassValid validation check
     * return 1 if password is valid else 0*/
    char userInput[50];
    int passCheck = 0;
    puts("please enter your password\n"
         "password should be 6-8 chars and include at least:\n"
         "1 upper case letter.\n"
         "1 lower case letter.\n"
         "1 digit.\nhave no duplicates.");
        fgets(userInput, 250, stdin);
        passCheck = isPassValid(userInput);
        if (passCheck) {return 1;}
        return 0;
}

int main(){
    printf("%d",passWord());
    return 1;
}