#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 67};
    printf("value at posoition 3 of th array is %d \n", arr[3]);
    printf(" the address of first element of the array is %d \n", &arr[0]); //&arr[0] se address print ho gaya
    printf(" the address of first element of the array is %d \n", arr);
    printf(" the address of first element of the array is %d \n", &arr[0]);
    printf(" the address of first element of the array is %d \n", arr + 1);
    // not arr++ error

    printf(" the value at address of first element of the array is %d \n", *(&arr[0])); //&arr[0] se address print ho gaya
    printf(" the value at address of first element of the array is %d \n", *(arr));
    printf(" the value at address of first element of the array is %d \n", *(&arr[1]));
    printf(" the value at address of first element of the array is %d \n", *(arr + 1));
    printf(" the value at address of first element of the array is %d \n", arr[0]);
    return 0;
}