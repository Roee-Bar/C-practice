#include <stdio.h>
#include <stdlib.h>
/*takes 2 ints and calculate a in  power of n*/
int pow(int a, int n){
    int i,res=1;
    for(i=0;i<n;i++){
        res*=a;
    }
    return res;
}


int main(){
    int a,q,n,i,res;
    puts("Enter element of the series: ");
    if ((scanf("%d",&a))!=1){
        puts("wrong input");
        exit(0);
    }
    puts("Enter the series ratio: ");
    if ((scanf("%d",&q))!=1){
        puts("wrong input");
        exit(0);
    }
    puts("Enter number of elements to display: ");
    if ((scanf("%d",&n))!=1){
        puts("wrong input");
        exit(0);
    }
    /*print the number of elements from the series as asked by the user in display*/
    for(i=0;i<n;i++){
        printf("%d ",3*pow(a,i));
    }

}