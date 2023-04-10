#include<stdio.h>
int main(){
    int a,b;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
  int min= a<b?a:b;
  printf("%d",min);
  return 0;
}