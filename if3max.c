#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a three number:");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c){
        printf("maximum is:%d",a);
            
    }
    else if(b>a && b>c){
        printf("maximum is:%d",b);
    }
    else if(c>a && c>b){
        printf("maximum is:%d",c);
    }
    else{
        printf("all are equal");

    }
    return 0;
    
}