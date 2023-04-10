#include<stdio.h>
int main (){
    char out;
    int a,b; 

 printf("Enter your operator");
 scanf("%c",&out);
  //  printf("Enter two value ");
    scanf("%d %d",&a,&b);
switch(out){
    case '+':
  printf("the addition is : %d",a+b);
    break;
    case '-':
    printf(" the sub is %d",a-b);
    break;
    case '*':
    printf(" the multiplication is %d",a*b);
    break;
  case '/':
  printf(" the division is%d ",a/b);
  break;

}
    return 0;
}

    