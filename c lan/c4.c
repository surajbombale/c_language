#include <stdio.h>

 int main(){

int arr[5]={2,4,6,8,10};
int sum=0;
float avg;

for (int i=0; i<5; i++)
{
    sum += arr[i];
}

avg =(float)sum/5;

printf("Average of array elements: %.2f",avg);
return 0;

 }