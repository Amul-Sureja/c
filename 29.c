#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
}; // harry, ravi, shubham ;
// struct Student harry, ravi, shubham; // global variable

int main()
{
    struct Student harry, ravi, shubham; // local variable
    harry.id = 34;
    ravi.marks = 23;
    strcpy(harry.name, "harry potter student of the year");
    printf("harry got %d marks\n", harry.marks);
    printf("harry's name is %s\n", harry.name);

    return 0;
}