#include <stdio.h>
struct Employee
{
    int id;
    char name[5];
    float marks;
}e1, e2;
    // struct  Employee; // yaha bhi likh sakte ho

int main()
{
    struct  Employee e1;        // struct  Employee is detatype
    e1.id = 13;
    e2.marks = 12.32;          // . is structur member operator.
    /*
    or
    struct Employee e1 = {13, 12.32};
    */
    return 0;
}

// accessed using of dot[.] operator is called as "structure member oprater"


/*
struct [structure_name]
{
    //data_type var 1
    //data_type var 2
    //data_type var 3.....
}
[stucture_variables];
*/
