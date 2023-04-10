# include<stdio.h>
int main(){
    int n=5,i,c=0;
  

    for(i=1;i<=n;i++){
        if(n%i==0){
        c++;
    }
    }


if(c==2){
    printf("number is prime");

}
else{
    printf("number is not prime");
}}