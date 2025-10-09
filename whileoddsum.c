#include<stdio.h>
int main(){
    int n ,sum=0;
    int i=1;
    printf("Enter a number:");  
    scanf("%d",&n);
    while(i<=n){
        if(i%2!=0){
            sum=sum+i;
            printf("%d\n",sum);
        }
        i++;
    }   
printf("Sum of odd numbers is %d",sum);
return 0;
}