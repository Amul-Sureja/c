#include <stdio.h>

int b = 34;

int ret()
{
    return 8 * 9;
}
int func1(int b1)
{
    static int myvar = 0;
    // static int myvar = ret();    //no posibale
    printf("the value of myvar is %d\n", myvar);
    myvar++;
    // return b1 + myvar;
}

int main()
{
    int b = 344;
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    return 0;
}

/*
static data_type name = value;
then value is constant run time is not error.
then value is not constant run time is error.
*/