#include<stdio.h>
int main(){
    int a,b;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
  int max= a>b?a:b;
  printf("%d",max);
  return 0;
}