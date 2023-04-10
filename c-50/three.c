//area of triangle

#include<stdio.h>
int main(){
float area,base,height;
printf("enter base: ");
scanf("%f",&base);

printf("enter height: ");
scanf("%f",&height);
area=0.5*base*height;

printf("area of triangle is: %f",area);
return 0;
}