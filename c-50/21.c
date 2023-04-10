//reverse

#include<stdio.h>
#include<conio.h>
void  main(){
    int rem,n;

    printf("enter number: ");
    scanf("%d",&n);
    while (n>0)
    {
   rem=n%10;
   printf("%d",rem);
   n=n/10;
    }
    
}