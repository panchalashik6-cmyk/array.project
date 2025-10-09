#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    i=1;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("Sum is %d",sum);
    return 0;
}