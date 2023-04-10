#include<stdio.h>
int main(){

    int a;
    printf("Enter a");
    scanf("%d",&a);

    int b;
    printf("Enter b");
    scanf("%d",&b);


    a=b;
    b=a;

    printf("%d Valu of A : ",a);
    printf("%d Value of B : ",b);



    
}