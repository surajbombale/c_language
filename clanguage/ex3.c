# include<stdio.h>

int main(){

    int code;
    printf("add=1 \n sub=2 \n mul=3 \n div=4 \n");
    printf("enter code");
    scanf("%d",&code);


switch (code){

    case 1:
    add();
    break;


    case 2:
    sub();
    break;

    case 3:
    mul();
    break;


    case 4:
    div();
    break;
}



}

int add(){
int a;
printf("Enter a");
scanf("%d",&a);

int b;
printf("Enter b");
scanf("%d",&b);

int add;
add=a+b;
printf("addition is %d",add);

}

int sub(){
    int a;
    printf("Enter a");
    scanf("%d",&a);

     int b;
    printf("Enter b");
    scanf("%d",&b);

    int sub;
    sub=a-b;
    printf("substraction is %d",sub);
}

int mul(){
    int a;
    printf("Enter a");
    scanf("%d",&a);

     int b;
    printf("Enter b");
    scanf("%d",&b);

    int mul;
    mul=a*b;
    printf("multiplication is %d",mul);

}


int div(){
    int a;
    printf("Enter a");
    scanf("%d",&a);

    int b;
    printf("Enter b");
    scanf("%d",&b);

    int div;
    div=a/b;
    printf("division is %d",div);

}