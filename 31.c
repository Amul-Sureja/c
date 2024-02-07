#include <stdio.h>
typedef struct Student
{
    int id;
    int marks;
} std;

int main()
{
    std s1, s2; //struct student s1, s2; // bhi likh sakte ho
    s1.id = 45;
    s2.id = 456;
    printf("value of s1's id is %d\n", s1.id);
    printf("value of s2's id is %d\n", s2.id);
    return 0;
}