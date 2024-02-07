// by declaring array as a parameter in the function

#include <stdio.h>
int func(int arr[])
{ 
    for (int i = 0; i < 9; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[8] = {32, 62, 51, 84, 95, 62, 32, 54};

    int avg = func(arr);
    printf("%d \n",sum);
    return 0;
}