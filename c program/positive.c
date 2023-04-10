#include<stdio.h>
int main(){
    int a;
    printf("Enetr a number :");
    scanf("%d",&a);
  

    if(a>0){
        printf("The number is positive ");

    }
    else if (a<0){
        printf("The number is nagetive ");
    }
    else{
        printf("The number is Zero");
    }
    return 0;
}