#include<stdio.h>
int main(){
    int i,n,j,k;
    printf("enter number........");
    scanf("%d",&n);
    for(i=n-1;i>=0;i--){
        for(j=0;j<=i;j++){
            printf("%c",65+j);

        }
        for(k=1;k<(n-i);k++){
            printf(" ");
        }
         for(j=i;j>=0;j--){
            printf("%c",65+j);
      printf(" ");
        }
    }
    return 0;
}