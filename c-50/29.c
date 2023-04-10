#include<stdio.h>
int main(){
    int a,num;

 printf("enter number");
 scanf("%d",&num);

 for(int a=1;a<num;a++){
    for(int b=1;b<=a;b++){
        printf(" ");
    }
    for(int c=a;c<=num;c++){
        printf("*");
    }
    printf("\n");
 }

}