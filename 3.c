#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*return 1 if string is build only from the right numbers*/
int isStrValid(char* str) {
    int i;
    switch (strlen(str)) {

        case 2:
            if (str[0] < '0' || str[0] > '9') {
                return 0;
            }
            break;
        case 3:
            if (str[0]=='2'){ if (str[1]!='0'){return 0;}}
            if (str[0] < '0' || str[0] > '2' || str[1] < '0' || str[1] > '9') {
                return 0;
            }
            break;
        default:
            return 0;
    }
    return 1;
}

int printStar() {
    /*gets input from the user until he enter a valid int
     * and then calculate this int factorial and print it to the screen*/
    puts("welcome to star printer");
    char userInput[50];
    int intInput = 0, charCheck = 0, i, j;
    while (1) {
        puts("please enter your number between 5-20");
        fgets(userInput, 250, stdin);
        charCheck = isStrValid(userInput);
        if (charCheck) {
            intInput = atoi(userInput);
            /*loop for printing the star*/
            for (i = 1; i <= intInput; i++) {
                for (j = 1; j <= i; j++) {
                    printf("*");
                }
                puts("");
            }
            puts("bye bye!");
            break;
        } else { puts("please enter valid int"); }
    }
}

int main(){
    printStar();
    return 1;
}