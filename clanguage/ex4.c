//example1
# include<stdio.h>

int main(){

    int num;
    printf("enter number");
    scanf("%d",&num);


    switch (num %2){

        case 0:
        printf("number is even");
        break;

        case 1:
        printf("number is odd");
        break;

    }
}

//example2

# include<stdio.h>

int main(){
    int num;
    printf("Enter number");
    scanf("%d",&num);

    switch (num %2){

        case 0:
        printf("Number is even");
        break;

        case 1:
        printf("number is odd");
        break;
    }
}