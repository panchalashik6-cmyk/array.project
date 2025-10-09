#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a three number:");
    scanf("%d%d%d",&a,&b,&c);

    if(a<b && a<c){
        printf("minimum is:%d",a);
            
    }
    else if(b<a && b<c){
        printf("minimum is:%d",b);
    }
    else if(c<a && c<b){
        printf("minimum is:%d",c);
    }
    else{
        printf("all are equal");

    }
    return 0;
    
}