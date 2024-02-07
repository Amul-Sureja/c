#include <stdio.h>
int main()
{
    int a = 34;
    int *ptra = &a;
    printf("%d\n", ptra);
    ptra++;
    printf("%d\n", ptra);
    printf("%d\n", ptra - 2); // ptra me  + n karne se n size of int jodega
    return 0;
}