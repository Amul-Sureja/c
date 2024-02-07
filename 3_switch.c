#include<stdio.h>

int main()
{
    int age;
    printf("enter yout age\n");
    scanf("%d", &age);

    switch(age)
    {
        case 1:
            printf("this is age 1\n");
            break;

        case 2:
            printf("this is age 2\n");
            break;

        default:
            printf("this is invalid age\n");
            break;
    }
    return 0;
}
