// square and cube root

#include<stdio.h>
int main(){
    int num,square,cube;
    printf("enter number: ");
    scanf("%d",&num);

    square=num*num;
    cube=num*num*num;
    printf("the square of %d is %d and cube is %d",num,square,cube);
    return 0;
}