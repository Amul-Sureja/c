#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    printf("***************** metrix multiplication *****************\n\n");
    int m, n, p, sum = 0;

    printf("Enter no of metrix 1 raw : \n");
    scanf("%d", &m);
    printf("Enter no of metrix 1 colum and metrix 2 raw : \n");
    scanf("%d", &n);
    printf("Enter no of metrix 2 colum : \n");
    scanf("%d", &p);

    printf("metrix 1 raw : %d\n", m);
    printf("metrix 1 colum : %d\nmetric 2 raw :%d\n", n, n);
    printf("metrix 2 colum : %d\n", p);

    int metrix1[m][n];
    int metrix2[n][p];
    int metrix3[m][p];

    printf("Enter First metrix : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the %d %d element of First metrix : \n", i, j);
            scanf("%d", &metrix1[i][j]);
        }
    }

    printf("Enter Secound metrix : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("Enter the %d %d element of First metrix : \n", i, j);
            scanf("%d", &metrix2[i][j]);
        }
    }

    printf("Result of multiplication of metrix 1 and metrix 2 : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            for (int k = 0; k < n; k++)
            {
                sum += (metrix1[i][k] * metrix2[k][j]);
                // printf("%d \n", sum);
            }
            metrix3[i][j] = sum;
            sum = 0;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("%d \t",metrix3[i][j]);
        }
        printf("\n");
    }
    printf("************** End of programm **************\n\n");
    return 0;
}