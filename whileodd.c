#include<stdio.h>
int main(){
    int i=1,n=100;
    while(i<=n){
        if(i%2==1){
            printf("%d\n",i);
        }
        i++;
    }
}