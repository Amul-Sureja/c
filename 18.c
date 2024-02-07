#include <stdio.h>
int func1(int array[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("the value is %d is %d \n", i, array[i]);
    }
    array[0] = 123;
    return 0;
}

int main()
{
    int arr[] = {12, 36, 59, 84, 12};
    printf("the value at index 0 is %d \n", arr[0]);
    func1(arr);
    printf("the value at index 0 is %d \n", arr[0]);
    return 0;
}