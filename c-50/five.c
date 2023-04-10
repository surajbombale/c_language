//swap numbers
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter numbers: ");
    scanf("%d %d",&a,&b);
    printf("\nnumbers before swapping:a=%d b=%d",a,b);
c=a;
a=b;
b=c;
printf("\nnumbers after swapping:a=%d b=%d",a,b);
return 0;
}