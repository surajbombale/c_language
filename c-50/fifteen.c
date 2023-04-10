#include<stdio.h>
int main(){
    int a,b,c;

   printf("enter number a");
   scanf("%d",&a);
   printf("enter number b");
   scanf("%d",&b);
   printf("enter number c");
   scanf("%d",&c);


   if((a>=b) && (a>=c)){
    if(b>=c){
       
        printf("desending order %d %d %d",a,b,c);
         printf("assending order %d %d %d",c,b,a);

    }else{
        printf("dessending order :%d %d %d",a,c,b);
        printf("assending order :%d %d %d ",b,c,a);
    }
   }
   else if((b>=a) && (b>=c)){
        if(a>=c){
            printf("densending order :%d %d %d ",b,a,c);
            printf("assending order : %d %d %d",c,a,b);
        }else{
            printf("Desending order :%d %d %d ",b,c,a);
            printf("assending order :%d %d %d ",a,c,b);
        }
    }
    else if((c>=a) && (c>=b)){
        if(a>=b){
            printf("Dessending order :%d %d %d",c,a,b);
            printf("assending order :%d %d %d ",b,a,c);
        }else{
            printf("Dessending order :%d %d %d",c,b,a);
            printf("assending order :%d %d %d ",a,b,c);
        }

    }


return 0;

}