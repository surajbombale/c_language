#include<stdio.h>
int main(){
    int a,fact=1;

    printf("enter nunmber");
    scanf("%d",&a);

    for(int b=1;b<=a;b++){
          fact=fact*b;
    }
    printf("factorial is %d",fact);
}