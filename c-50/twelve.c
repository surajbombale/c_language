// multiple by  7 
#include<stdio.h>
int main(){
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    if (n%7==0)
    {
        printf("%d is multiple by 7",n);
    }else{
        
        printf("%d is not multiple by 7",n);
    }
    
    
    return 0;
    }