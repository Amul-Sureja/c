#include<stdio.h>

int main()
{
    int age;
    for (int i=0; i<10; i++)
    {
    printf("%d\n enter your age:\n",i);
    scanf("%d",&age);
    if (age>10)
    {
        continue;
    }
        printf("not required age");
        break;
    }
    
    return 0;
}
