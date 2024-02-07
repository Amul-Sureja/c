// 47
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("enter the size of the array you want to creat\n");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the value no %d of thif array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("enter the value no %d of thif array %d\n", i, ptr[i]);
    }

    return 0;
}