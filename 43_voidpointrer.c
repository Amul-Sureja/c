// void pointer
/*
    int x = 10;
    char y = 'x';
    void *p = &x;
    p = &y;

    in dinamic memory return (void*) type pointer
*/


#include <stdio.h>
int main()
{
    int a = 345;
    float b = 33;
    void *ptr;
    ptr = &a;
    // printf("the value of a is %d\n", * ptr); => error
    printf("the value of a is %d\n", *((int *)ptr));  // this is typecasting
    return 0;
}