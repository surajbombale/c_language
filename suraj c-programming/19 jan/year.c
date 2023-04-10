#include<stdio.h>
int main(){
    int a;
    printf("enter the year");
    scanf("%d",&a);

    switch(a%4==0){

        case 1:
        printf("the year is leap");
        break;

        default:
        printf("the year not leap year");

    }
    return 0;
}