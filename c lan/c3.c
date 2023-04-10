#include <stdio.h>

 int main(){


int arr[5]={7,4,9,1,5};
int min=arr[0];

for (int i=0; i<5; i++){

    min=arr[i];
}
printf("snallest element in the array %d",min);
return 0;


 }