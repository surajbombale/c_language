#include<stdio.h>
int main(){
    int a=12;
    int b=22;
    int op;
    printf("enter your op");
    scanf("%d ",&op);
    switch(op){
        case 0:
        printf("%d is sum of two numbers",a+b);
        break;
        case 1:
        printf("%d is subtraction of two numbers",a-b);
        break;
        case 2:
        printf("%d is multiplication of two numbers",a*b);
        break;
        case 3:
        printf("%d is division  of two numbers",a/b);
        break;
        
    }
}