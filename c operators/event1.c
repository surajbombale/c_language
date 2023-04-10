#include<stdio.h>
int main()
{
    int num;
    printf("enter your nummber");
    scanf("%d",&num);
    switch(num%2){
        case 0;
        printf("num is event");
        break;
        case 1;
        printf("number is  odd");
        break;
    }
    return 0;
}