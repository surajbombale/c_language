//ascending order
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter first number:- ");
    scanf("%d",&a);
     printf("enter second number:- ");
    scanf("%d",&b);
     printf("enter third number:- ");
    scanf("%d",&c);
    if((a>=b) && (a>=c)){
      if (b>=c)
      {
        printf("Descending order: %d %d %d \n",a,b,c);
        printf("Ascending order: %d %d %d \n",c,b,a);
      }else{
        
        printf("Descending order: %d %d %d \n",a,c,b);
        printf("Ascending order: %d %d %d \n",b,c,a);
      }
      
    }
      if((b>=a) && (b>=c)){
      if (a>=c)
      {
        printf("Descending order: %d %d %d \n",b,a,c);
        printf("Ascending order: %d %d %d \n",c,a,b);
      }else{
        
        printf("Descending order: %d %d %d \n",b,c,a);
        printf("Ascending order: %d %d %d \n",a,c,b);
      }
      
    }
      if((c>=b) && (c>=a)){
      if (b>=a)
      {
        printf("Descending order: %d %d %d \n",c,b,a);
        printf("Ascending order: %d %d %d \n",a,b,c);
      }else{
        
        printf("Descending order: %d %d %d \n",c,a,b);
        printf("Ascending order: %d %d %d \n",b,a,c);
      }
      
    }
    return 0;
}