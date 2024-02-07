#include<stdio.h>

int main()
{
    int marks[4] = {23, 34, 33, 56};
    for (int i=0; i<4; i++)
    {
        printf("this value of %d element of the array is %d \n",i,marks[i]);
    }

    /*
    int marks[4];
    for (int i=0; i<4; i++)
    {
        printf("enter the value of %d element of the array \n", i);
        scanf("%d", &marks[i]);
        // printf("this value of %d element of the array is %d \n",i,marks[i]);
    }
    
    for (int i=0; i<4; i++)
    {
        printf("this value of %d element of the array is %d \n",i,marks[i]);
    }
    */
    
    /*
    marks[0] = 90;
    printf("marks of first student is : %d \n",marks[0]);
    marks[0] = 990;
    printf("marks of first student is : %d \n",marks[0]);
    */
    return 0;
}
