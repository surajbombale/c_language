#include<stdio.h>
int main(){
    int i=1,n,counter=1;
    printf("enter n: ");
    scanf("%d",&n);

    while (i<=n)
    {
        printf("%d\t",counter);
        counter=counter+2;
        i++;
    }
    return 0;
}