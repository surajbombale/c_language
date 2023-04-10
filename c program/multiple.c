#include<stdio.h>
int main(){
    int a;
    printf("Enter number :");
    scanf("%d",&a);

    if(a%7==0){
        printf("The number muliple by 7");

    }else{
        printf("The number not multiple by 7");
    }
    return 0;
}