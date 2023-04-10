#include<stdio.h>
int main(){
  int a=5;
  for (int b=1; b<=a;b++){
    if(b%2==0){
        printf("%d is not prime number",a);
    }else{
        printf("%d is  prime number",a);
    }
  }return 0;
}