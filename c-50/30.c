#include<stdio.h>
int main(){
    int a,num;

 printf("enter number");
 scanf("%d",&num);

 for(int a=num;a>=1;a--){
   for(int b=1;b<-(num-a);b++){
    printf("  ");
   }
   for(int c=1;c<=a;c++){
    printf("*");
   }
    printf("\n");
 }

}