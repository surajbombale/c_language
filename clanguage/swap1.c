#include<stdio.h>

int main(){

    int a;
    printf("Entert a");
    scanf("%d",&a);

    int b;
    printf("Enter b");
    scanf("%d",&b);
    
    int c;

    a=b;
    b=c;
    c=a;

    printf("%d Value of A : ",a);
    printf("%d Value of B : ",b);
    printf("%d Value of C : ",c);
}