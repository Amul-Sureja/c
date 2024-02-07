#include <stdio.h>
int subass(int*x,int*y)
{
    int c, d;
    c = *x + *y;
    d = *x - *y;

    *x = c;
    *y = d;
    return 0;
}

int main()
{
    int a, b;
    printf("enter the two number a and b:");
    scanf("%d %d",&a, &b);
    printf("before running the function a is %d and b is %d. \n",a ,b);
    subass(&a, &b);
    printf("after running function a is %d and b is %d. \n",a ,b);
    return 0;
}