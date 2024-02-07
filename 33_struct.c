#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[32];
};
int main()
{
    struct Student s1;
    s1.id = 1;
    s1.marks = 45;
    s1.fav_char = 'u';
    strcpy(s1.name, "amul");

    printf("the id is %d\n", s1.id);
    printf("the marks is %d\n", s1.marks);
    printf("the fav_char is %c\n", s1.fav_char);
    printf("the name is %s\n", s1.name);
    return 0;
}

/*
union test {
    int a;
    float b;
    char c;
} un;
un.a;     // for accessing members of union un
un.b;
un.c;
*/

/*
the diffrence between structure and union lies in the fact that in structure, each member has its own stroge location, whereas member of union uses a single shared memory location.

*/