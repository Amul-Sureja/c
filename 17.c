#include <stdio.h>
int changevalue(int* address)
{
    *address = 990;
}

int main()
{
    int a = 34;
    printf("the value of a now is %d \n", a);
    changevalue(&a);
    printf("the changen value of a now is %d \n", a);
    return 0;
}
// home work
/*
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
}*/