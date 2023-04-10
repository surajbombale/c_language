#include<stdio.h> 
int main()
{ int arr[5]={1,5,3,9,2};
 int max=arr[0]; for(int i=1;i<5;i++)
 { 
    if (arr[i] > max) { max=arr[i]; } 
    }
  printf("Largest element in the array: %d",max); 
  return 0; }


