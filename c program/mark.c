#include<stdio.h>
int main(){
    int roll_no,m1,m2,m3,totle,average;
    printf("Enter roll no :");
    scanf("%d",&roll_no);
    printf("Enter mark 1:");
    scanf("%d",&m1);
      printf("Enter mark 2:");
    scanf("%d",&m2);
      printf("Enter mark 3:");
    scanf("%d",&m3);
    totle=m1+m2+m3;
    average=totle/3;
printf("Ans :%d",average);
return 0;
}