#include<stdio.h>
int main(){
  
  int star;

  printf("enter star num");
  scanf("%d",&star);


    for(int a=1;a<=star;a++){
          
          for(int b=1;b<=star;b++){
            
            printf("*");
          }
       printf("\n");
    }
}