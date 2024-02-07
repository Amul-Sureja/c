#include <stdio.h>
int main()
{
    // typedef <previous_name> <alias_name>;
    typedef unsigned long ul; // unsigned long is called ul with typrdef
    typedef int i;
    ul l1, l2, l3, l4;
    i a = 4;
    printf("%d \n",a);
    return 0;
}