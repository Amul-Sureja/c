// by passing array's base address to the function

#include <stdio.h>
int func1(int array[])
{
    printf("func1\n");
    for (int i = 0; i < 7; i++)
    {
        printf("the value at %d is %d \n", i, array[i]);
    }
    array[0] = 567;
    return 0;
}
int func2(int *ptr)
{
    printf("func2\n");
    for (int i = 0; i < 7; i++)
    {
        printf("the value at %d is %d \n", i, ptr[i]);
    }
    *(ptr + 2) = 654984;
    return 0;
}
int func3(int *ptr)
{
    printf("func3\n");
    for (int i = 0; i < 7; i++)
    {
        printf("the value at %d is %d \n", i, *(ptr+i));
    }
    return 0;
}
int main()
{
    int arr[] = {23, 62, 51, 62, 32, 65, 54};
    printf("the value at index 0 is %d \n", arr[0]);
    func1(arr);
    printf("the value at index 0 is %d \n", arr[0]);
    func2(arr);
    func2(arr);
    func3(arr);
    return 0;
}