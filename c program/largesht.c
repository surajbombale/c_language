#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a number :");
    scanf("%d",&a);
    printf("Enter b number :");
    scanf("%d",&b);

    if(a>b){
        printf("The largest value of %d",a);

    }
    else{
        printf("The largest value of %d",b);

    }
    return 0;
}