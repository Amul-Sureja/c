#include <stdio.h>

void starPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reverseStarPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int n, a;
    printf("enter 0 for star pettrun and 1 for reversed star pettrun : \n");
    scanf("%d", &a);
    printf("enter raw : \n");
    scanf("%d", &n);
    switch (a)
    {
    case 0:
        starPattern(n);
        break;

    case 1:
        reverseStarPattern(n);
        break;

    default:
        printf("invalid number \n");
        break;
    }
    return 0;
}