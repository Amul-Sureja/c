#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main()
{
    int a = 34, b = 98;
    printf("%d and %d \n", a, b);
    swap(&a, &b); //<== example of call by refrence
    printf("%d and %d \n", a, b);
    return 0;
}