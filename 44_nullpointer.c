// null pointer
/*
    int x = 10;
    int *p = NULL;
    p = &x;

*/

/*
#include <stdio.h>
int main()
{
    int a = 34;
    // int * ptr = &a;
    int * ptr = NULL;
    printf("the address of a is %d\n", ptr);
    return 0;
}
*/

#include <stdio.h>
int main()
{
    int a = 34;
    int *ptr = NULL;
    if (ptr != NULL)
    {
        printf("the value of a is %d", *ptr);
    }
    else
    {
        printf("the pointer is a null pointer and cannot be dereferenced\n");
    }
    return 0;
}
