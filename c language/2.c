#include<stdio.h>
int main(){
  int a=69;
  switch(a%2==0){
  case 0:
  printf("%d is odd number",a);
  break;
  case 1:
  printf("%d is even number",a);
  }return 0;

}