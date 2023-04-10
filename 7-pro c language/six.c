#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter first num:-");
    scanf("%d",&a);

    printf("enter second num:-");
    scanf("%d",&b);
    
    printf("enter third num:-");
    scanf("%d",&c);
if (a>b && a>c)
{
    printf("greater number is %d",a);
}
else if (b>a && b>c)
{
    printf("greater number is %d",b);
}
else if (c>a && c>b)
{
    printf("greater number is %d",c);
}



return 0;
}