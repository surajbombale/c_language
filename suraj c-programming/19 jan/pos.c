#include<stdio.h>

int main(){

    int a;

    printf("enter the number");
    scanf("%d",&a);

    switch(a>=0){

        case 1:
        printf("the number is positive");
        break;

   default:
        printf("the number is negative");
    }
    return 0;
}