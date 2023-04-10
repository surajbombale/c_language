#include<stdio.h>
int main(){
    int ID; 
    int pass;
    printf("Enter a ID  number \n");
    scanf("%d",&ID);

    switch(ID){
        case 18:
        case 07:
        case 23:

        printf("Enter a password \n");
        scanf("%d",&pass);
        
        switch(pass){

            case 123:
            printf(" %d password is correct",pass);
              break;

            case 415:
            printf(" %d pass is correct",pass);
            break;


          default:
          printf("id is incorrect");  
          break;

        }
break;
default:
printf("id is incorrect");

    }
    return 0;
}
