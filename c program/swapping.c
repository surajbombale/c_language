#include<stdio.h>
int main(){
    int a,b,temp;

    printf("Enter a :");
    scanf("%d",&a);
    printf("Enter b :");
    scanf("%d",&b);

    printf("before swapping a=%d,b=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAftr swapping a=%d,b=%d",a,b);

    return 0;

}