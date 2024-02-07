#include <stdio.h>
void func1(int array[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("the value at %d, %d is %d \n", i, j, array[i][j]);
        }
    }
}

int main()
{
    int arr[][2] = {{2, 13}, {9, 3}};
    func1(arr);
    return 0;
}
