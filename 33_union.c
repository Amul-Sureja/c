#include <stdio.h>
#include <string.h>
union Student
{
    int id;
    int marks;
    char fav_char;
    char name[32];
};
int main()
{
    union Student s1;
    strcpy(s1.name, "amul");
    s1.fav_char = 'u';
    s1.marks = 45;
    s1.id = 1;

    printf("the id is %d\n", s1.id);
    printf("the marks is %d\n", s1.marks);
    printf("the fav_char is %c\n", s1.fav_char);
    printf("the name is %d\n", s1.name);
    return 0;
}