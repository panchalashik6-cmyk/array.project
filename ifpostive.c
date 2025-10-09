#include<stdio.h>
int main(){
    int num;
    printf("Enter any number :");
    scanf("%d",&num);
    if(num > 0){
        printf("number is postive");
    }
    else if(num < 0 ){
        printf("number is negitive");
    }
    else{
        printf("number is zero ");
    }
    return 0;
        
}