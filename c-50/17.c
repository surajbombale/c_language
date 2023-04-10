// marital status
#include <stdio.h>
int main()
{
    char maritalStatus, gender;
    int age;
    printf("for married=m and unmarried=u");
    scanf("%c", &maritalStatus);
    
        printf("for male=m and female=f");
        scanf("%c", &gender);


            printf("enter your age");
            scanf("%d", &age);

    if (maritalStatus == 'm')     {
        printf("you can't marry, you already married!");
    }
    else if (maritalStatus == 'u')
    {
        if (gender == 'm')
        {
            if (age >= 21)
            {
                printf("you can marry");
            }
            else if (age < 21)
            {
                printf("you can't marry, your age is not completed!");
            }
            else
            {
                ("wrong input");
            }
        }
      else if (gender == 'f')
        {
            if (age >= 18)
            {
                printf("you can marry");
            }
            else if (age < 18)
            {
                printf("you can't marry, your age is not completed!");
            }
            else
            {
                ("wrong input");
            }
        }
    }

    return 0;
}