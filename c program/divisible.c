#include<stdio.h>
int main(){
    int a;
    printf("Enter number :");
    scanf("%d",&a);

    if(a%5==0){
        printf("The number divisible by 5");

    }else{
        printf("The number not divisible by 5");
    }
    return 0;
}