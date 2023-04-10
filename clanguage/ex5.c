# include<stdio.h>
int main(){
  
    int num;
    printf("enter number");
    scanf("%d",&num);

    switch (num %2==1){
        case 0:
        printf("number is prime");
        break;

        case 1:
        printf("number is not prime");
        break;

    }
}