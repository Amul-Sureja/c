#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    printf("random number is the %d\n",rand()%5);
    return 0;
}