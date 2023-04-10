# include<stdio.h>

int main(){

    int year;

    printf("enter year");
    scanf("%d",&year);

    if(year %2==0){
    printf("this is a leap year");

    }
    else{

        printf("this is a not leap year");
    }

return 0;

}