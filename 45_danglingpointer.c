// dangling pointer
/*
==> deallocation of memory

char *str = "hi amul!";
int a;
int *ptr = (int*) malloc(sizeof(int));;
free(ptr);
ptr = NULL;

*/

/*
==> returning local variables in function calls
#include <stdio.h>
int *myfun(){
    int a = 98;
    return &a;
}
int main()
{
    int *ptr = myfun();
    printf("%d",*ptr);
    return 0;
}
*/

/*
==> variable going out of scope
#include <stdio.h>
int main()
{
    int *ptr;
    { ==> scope start
        int i = 0;
        ptr = &i;
    }
    printf("%d",*ptr);
    return 0;
}
*/
