//-----------------------------------------recursion function-------------------------------------------------
/*
#include <stdio.h>

void printHW(int count);

int main()
{
    printHW(4);
    return 0;
}

// recursion function
void printHW(int count) {
    if(count == 0) {
        return;
    }
    printf("Hello World\n");
    printHW(count - 1);
}
*/

/*
#include <stdio.h>

int fact(int n);

int main()
{
    printf("factorial is : %d \n",fact(5));
    return 0;
}

int fact(int n){
    if(n==1){
        return 1;
    }
    int factn = fact(n-1) * n;
    return factn;
}
*/

#include <stdio.h>
int factorial(int n); 

int main()
{
    int n;
    printf("enter the number fibnd the factorial : ");
    scanf("%d",&n);
    printf("factorial of %d number is %d. \n", n, factorial(n));
    return 0;
}

int factorial(int n)
{
    if(n == 1 || n == 0){
        return 1;
    }
    else {
        return (factorial(n-1) * n);
    }
}
