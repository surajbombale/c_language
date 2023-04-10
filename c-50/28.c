#include<stdio.h>
int main(){
    int a,num;

 printf("enter number");
 scanf("%d",&num);

 for(int a=num;a>=1;a--){
    for(int b=1;b<=a;b++){
        printf("*");
    }
    printf("\n");
 }

}