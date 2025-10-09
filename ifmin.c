#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter a two number:");
    scanf("%d%d",&num1,&num2);
    if(num1<num2){
        printf(" minimum is: %d",num1);

    }
    else if(num2<num1){
        printf("minimum is:%d",num2);
    }

    else{
        printf("both are equal");
    }

    return 0;

    

}