// armstrong numbers
#include<stdio.h>
int main(){
int temp,rem,sum=0,n;
printf("enter number: ");
scanf("%d",&n);
temp=n;
while (n>0)
{
    rem=n%10;
    sum=sum+rem*rem*rem;
    n=n/10;
}
if(temp==sum){
    printf("it's a armstrong number.");
}
else{
printf("it's not a armstrong number.");

}






    return 0;
}