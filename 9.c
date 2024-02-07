#include <stdio.h>

int fac(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    } else {
        return (number*fac(number-1));
    }
}

int main()
{
    int num;
    printf("enter the number of fac: \n");
    scanf("%d",&num);
    printf("the fac of %d of %d \n",num, fac(num));
    return 0;
}
