#include<stdio.h>
int main(){
int a;
printf("enter a number:- ");
scanf("%d",&a);
a%3==0?printf("divisible by 3"):printf("not divisible by 3");
    return 0;
}