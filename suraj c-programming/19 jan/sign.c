#include<stdio.h>
int main(){

char ch;
printf("entar a sign");
scanf("%c",&ch);
switch(ch){
    case '*':
    printf("the sign is asteric");
    break;

    case '#':
    printf(" the sign is hashtag");
    break;

    case'@':
    printf("the sign is mention");
    break;
    default:
    printf("invalid");
}
return 0;
}