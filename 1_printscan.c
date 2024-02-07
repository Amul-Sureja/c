#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    float f, d, e;
    char star;

    printf("enter any six number and one star:");

    scanf("%d %d %d %f %f %f %c", &a, &b, &c, &d, &e , &f , &star);

    printf("a = %d\n", &a); //  output of address of a
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %f\n", d);
    printf("e = %0.4f\n", e);
    printf("f = %0.2f\n", f);
    printf("star = %c\n", star);

    // int a, b;
    // printf("enter any two number:");

    // scanf("%d %d",&a ,&b);

    // printf("sum = %d\n", a+b);
    // printf("div = %d\n", a/b);
    // printf("mul = %d\n", a*b);
    // printf("sub = %d\n", a-b);
    // return 0;

    // float a, pi = 3.14 ;
    // printf("enter the circle radius:");

    // scanf("%f",&a);

    // printf("aera of circle = %f", pi*a*a); //"3.14*a*a || 22*a*a/7 || pi*a*a "//
    // return 0;

    // size of data type
    // printf("%lu", sizeof(int));
    // return 0;

    // tcble number n    
    // int main()
    // {
    // int n;
    // printf("enter any number:\n");
    // scanf("%d",&n);

    // printf("%d * %d = %d\n",n,1,n*1);
    // printf("%d * %d = %d\n",n,2,n*2);
    // printf("%d * %d = %d\n",n,3,n*3);
    // printf("%d * %d = %d\n",n,5,n*5);
    // printf("%d * %d = %d\n",n,4,n*4);
    // printf("%d * %d = %d\n",n,6,n*6);
    // printf("%d * %d = %d\n",n,7,n*7);
    // printf("%d * %d = %d\n",n,8,n*8);
    // printf("%d * %d = %d\n",n,9,n*9);
    // printf("%d * %d = %d\n",n,10,n*10);
    return 0;
    
}
