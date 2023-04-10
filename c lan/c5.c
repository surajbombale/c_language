#include <stdio.h>

 int main(){

int arr[5]={3,8,1,6,9};
int search=6;
int found=0;

for(int i=0;i<5;i++)
{
    if(arr[i]==search){
        found=1;
        break;
    }
}
if (found==1){
    printf("element found in the array");
}else{
    printf("element not found ");

}
return 0;
 }