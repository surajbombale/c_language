# include<stdio.h>

int main(){
    int n,i=1,fact=1;
    printf("Enter a possitive integer:");
    scanf("%d",&n);
    do{
        fact=fact*i;
        i++;
    }
    while(i<=n);
    printf("factorial of %d=%d\n",n,fact);
    return 0;
}