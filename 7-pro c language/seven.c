#include<stdio.h>
int main(){
char ch;
char a="alfa";
char b="no";
printf("enter char:-");
scanf("%c",&ch);
ch>='a' && ch<='z' || ch>='A' && ch<='Z'?printf("albhabets"):printf("not albhbets");
    return 0;
}