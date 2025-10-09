#include<stdio.h>
int main(){
    char ch;
    printf("Ente any character:");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z'){
        printf("CHARACTER IS UPPERCASE");
    }
        else  if (ch>='a' && ch<='z'){
            printf("character is lowercase");
        }
        else{
            printf("character is not alphabet");
        }

    }
