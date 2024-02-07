#include <stdio.h>
int main() {
    int* a, b;     
    typedef int* intpointer;
    intpointer a, b;
    int c = 45;
    a = &c;
    b = &c;
    return 0;
}

/*
    int* a, b; ==> meaning => a and b are not pointer integer.  a is pointer integer but b is not pointer integer. so code is =>  a = &c; 
                b = c; 
                        solution with typedef below.
*/
