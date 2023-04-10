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

if(average>60){
    printf("\n grade:A");
}else if(average>=50 && average<60){
    printf("\n grade:B");
}else if(average>=40 && average<50){
    printf("\n grade:C");
}else{
    printf("\n grade:F");
}

return 0;
}