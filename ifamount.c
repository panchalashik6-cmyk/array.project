#include<stdio.h>
int main(){
    int amount;
    int note500,note100,note50,note20,note10,note5,note2,note1;
    printf("Enter amount:");
    scanf("%d",&amount);

    if(amount>=500){
        note500=amount/500;
        amount-=note500*500;
        printf("no of 500 notes:%d\n",note500);
    }
    if(amount>=100){
        note100=amount/100;
        amount-=note100*100;
        printf("no of 100 notes:%d\n",note100);
    }
    if(amount>=50){
        note50=amount/50;
        amount-=note50*50;
        printf("no of 50 notes:%d\n",note50);
    }
    if(amount>=20){
        note20=amount/20;
        amount-=note20*20;
        printf("no of 20 notes:%d\n",note20);
    }

    if(amount>=10){
        note10=amount/10;
        amount-=note10*10;
        printf("no of 10 notes:%d\n",note10);
    }
    if(amount>=5){
        note5=amount/5;
        amount-=note5*5;
        printf("no of 5 notes:%d\n",note5);
    }

    if(amount>=2){
        note2=amount/2;
        amount-=note2*2;
        printf("no of 2 notes:%d\n",note2);
    }
    if(amount>=1){
        note1=amount/1;
        amount-=note1*1;
        printf("no of 1 notes:%d\n",note1);
    }
    else{
        printf("invalid amount");
    }
    return 0;

}