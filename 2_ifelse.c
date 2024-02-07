#include<stdio.h>

int main()
{
    int age;
    printf("enter your age\n");

    scanf("%d",&age);
    printf("your entered %d as your age\n", age);
    if (age>18)
    {
        printf("you are volet!");
    } else {
        printf("you are canmot volet!");
    }
    
    return 0;
}
