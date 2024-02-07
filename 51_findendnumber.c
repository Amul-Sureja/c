#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a, c, d;
    printf("number\n");
    scanf("%d",&a);
    scanf("%d",&c);
    scanf("%d",&d);
    int b = (a/c)%d;
    printf("number : %d\n",b);
    return 0;
}