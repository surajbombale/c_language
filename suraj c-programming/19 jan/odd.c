#include<stdio.h>

int main(){

    int a;

    printf("enter the number");
    scanf("%d",&a);

    switch(a%2==0){

        case 1:
        printf("the number is even");
        break;

   default:
        printf("the number is odd");
    }
    return 0;
}