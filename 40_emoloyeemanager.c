#include <stdio.h>
#include <stdlib.h>
int main()
{
    int chars, i = 0;
    char a, b;
    char *ptr;
    while (i < 3)
    {
        printf("enter the number of characters in your employee id \n");
        scanf("%d", &chars);
        getchar();
        printf("enter the value of a\n");
        scanf("%c", &a);
        getchar();
        printf("enter the value of b\n");
        scanf("%c", &b);
        ptr = (char *)malloc((chars + 1) * sizeof(char)); // string ko extra null character chahiye hota hai mate (chars+1) kiya
        printf("enter your employee id \n");
        scanf("%s", ptr);
        printf("your employee id %s\n", ptr);
        free(ptr);
        i = i + 1;
    }

    return 0;
}