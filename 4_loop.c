//for loop

#include<stdio.h>

int main()
{
    int a;
    printf("enter any two number:");
    scanf("%d",&a);

    for (int i=1; i<=a; i++)
    {
     printf("%d\n", i);
    }
    
    return 0; 
}

//do while loop
/*
#include<stdio.h>

int main()
{
    int a, i=0;
    printf("enter any one number:");
    scanf("%d",&a);
    do
    {
        printf("%d\n",i);
        i=i+1;
    } while (i < a);
    
    return 0;
}*/

// ehile loop
/*
#include<stdio.h>

int main()
{
    int a, i=0;
    printf("enter any one number:");
    scanf("%d",&a);

    while (i<a)
    {
        printf("%d\n",i);
        i=i+1;
    }
    
    return 0;
}*/
