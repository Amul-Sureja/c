
// return_type function_name(data_type parameter1,data_type parameter2....){
//      code to be executed    
//  }

#include<stdio.h>
//with argument and with return value.
/*
int sum(int a, int b)
{
    return a + b;                                // return value is a+b.  
}
int main()
{
    printf("hellow world\n");
    int a, b, c;
    a = 9;                                       // arguments = 9 and 10.
    b = 10;
    c = sum(a,b);
    printf("this sum is c %d\n",c);
    return 0;
}
*/

//with argument and without return value.
/*
void printstar(int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%c",'*');
    }
}
int main()
{
    printstar(9);
    return 0;
} 
*/

//without argument and with return.
/*
int takenumber()
{
    int i;
    printf("enter a number");
    scanf("%d", &i);
    return i;
}
int main()
{
    int c;
    c = takenumber();
    printf("the number is %d\n",c);
    return 0;
}
*/

//without argument and without return.


void sum();

int main() {
    sum();
}

void sum() {
    int a,b,c;
    printf("enter any two number:");
    scanf("%d %d",&a ,&b);
    c = a+b;
    printf("%d", c);
}
return 0;

/*
type of function
1. library function = function included in c header files.
2. user define function = function created by c programmer to reduce complexity of a program.
*/