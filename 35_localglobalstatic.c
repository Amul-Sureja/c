// local, global and static variable 
#include <stdio.h>

int func1(int b)
{
    printf("the address of b in funce is %d\n",&b);
    return b * 10;
}
int main()
{
    int b = 344;
    printf("the address of b in main is %d\n",&b);
    int val = func1(b);
    int *ptr = &val;
    printf("the value of sunc1 us %d\n", val);
    return 0;
}