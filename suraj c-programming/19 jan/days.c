#include<stdio.h>
int main(){

int day;
printf("entar a day");
scanf("%d",&day);
switch(day){
    case 0:
    printf("sunday");
    break;

    case 2:
    printf("monday");
    break;

    case 3:
    printf("tueday");
    break;

    case 4:
    printf("wednesday");
    break;

    case 5:
    printf("thursday");
    break;

    case 6:
    printf("friday");
    break;

    case 7:
    printf("saturday");
    break;
default:
printf("invalid");
    
}
 return 0;
}