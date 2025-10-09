#include<stdio.h>
int main(){
    int fact=1,n=5,i;
    while (n>0){
        fact=fact*n;
        n--;
    }
    printf("factorial is %d",fact);
    return 0;
           
    
}