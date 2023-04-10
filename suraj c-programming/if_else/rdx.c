#include<stdio.h>
int main(){
int weather;
printf("enter a value for the weather(1-3):");
scanf("%d",& weather);
if(weather==1){
    printf("the weather os sunny");
}
else if(weather==2){
    printf("the weather is cloudy");
}
else if(weather==3){
    printf("the weather is rainny ");
}
else{
    printf("invalid input");
}
return 0;
}