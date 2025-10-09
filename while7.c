#include<stdio.h>
int main(){
    int i=0,n=100,sum=0;
   while(i<=n){
    if(i%2==0){
        sum=sum+i;
        printf("%d\n",sum);
    }
        i++;
}
printf("Sum of even numbers is %d",sum);
return 0;
    
}