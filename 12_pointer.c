// pointers
#include <stdio.h>

int main()
{
    int a = 145;
    int *ptra = &a;
    int *ptr2;
    printf("the adress of pointer to a is %p \n", *ptra);
    printf("the value of a is %x \n", ptra); 
    printf("the adress of pointer to 2 is %p \n", ptr2);
    return 0;
}


// printf("the value of a is %d \n",a); print value of a
// printf("the value of a is %x \n",ptra);  print number of hexa desimal
// printf("the value of a is %d \n",*ptra);  print value of a
//  %x == ptra
//  %d == *ptra
//  %p == *ptra
// int *ptr2 = NULL; == print 000000000
