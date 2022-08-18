#include <stdio.h>

void multiTable(){
    /* 1) initialize two dimension array and calculate the multiplication table into it
     * 2) print the multiplication table*/
    int table[10][10],i,j,curr;
    for (i=0; i<10;i++){
        for (j=0;j<10;j++){
            curr=(i+1)*(j+1);
            table[i][j]=curr;
            printf("%6d",curr);
        }
        printf("\n");
    }

}

int main(){
    multiTable();
    return 1;
}