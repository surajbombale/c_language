#include<stdio.h>
int main(){
int rollNo,m1,m2,m3,average;
printf("enter your roll number: ");
scanf("%d",&rollNo);

printf("enter your first sub marks: ");
scanf("%d",&m1);
printf("enter your second sub marks: ");
scanf("%d",&m2);
printf("enter your third sub marks: ");
scanf("%d",&m3);
average=(m1+m2+m3)/3;
printf("the average of marks is %d %d %d =  %d",m1,m2,m3,average);

return 0;
}