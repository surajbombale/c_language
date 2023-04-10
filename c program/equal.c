#include<stdio.h>
int main(){

    int a,b,c;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Enter b number :");
    scanf("%d",&b);

    if(a>b){
        printf("a is gerter than b");

    }
    else if (b>a)
    {
        printf(" b is gerter than a");

    }
    else{
        printf("both are equal");

    }
    return 0;
    }