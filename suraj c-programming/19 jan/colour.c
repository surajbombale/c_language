#include<stdio.h>
int main(){
   int color;
   printf("enter color code");
   scanf("%d",&color);
   switch(color){
    case 0:
    printf("the color is red");
    break;
     case 1:
    printf("the color is yellow");
    break;
     case 2:
    printf("the color is pink");
    break;
     case 3:
    printf("the color is black");
    break;
     case 4:
    printf("the color is orange");
    break; 
    case 5:
    printf("the color is blue");
    break;
    default:
    printf("not match");
   } 
   return 0;
}