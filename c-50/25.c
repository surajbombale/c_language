//factorial but like sum
#include<stdio.h>
int main(){
    int n,i,newn,sum=0;
    printf("enter number: ");
    scanf("%d",&n);
    printf("Number  entered....\n");
    for(int i=1;i<=n;i++){
        scanf("%d",&newn);
        sum=sum+newn;
    }printf("sum of given digits is ...%d",sum);
    return 0;
}