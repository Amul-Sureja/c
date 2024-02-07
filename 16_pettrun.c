#include <stdio.h>
int star(rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

int main()
{
    int rows;
    printf("how many rows print star petturn:");
    scanf("%d", &rows);
    star(rows);
    return 0;
}

/*
#include <stdio.h>
int main()
{
    int n;
    printf("enter raw : \n");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/
