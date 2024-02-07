#include <stdio.h>
#include <string.h>
int main()
{
// label:
    int num, number, reverse = 0;
    printf("Enter any number : \n");
    scanf("%d", &number);
    int originalnumber = number;
    printf("number = %d\n", number);
    while (number != 0)
    {
        reverse = reverse * 10 + number % 10;
        number = number / 10;
    }
    printf("reversed of number = %d\n", reverse);

    if ((originalnumber) == (reverse))
    {
        printf("This is palindromic number.\n\n");
    }
    else
    {
        printf("This is not palindromic number.\n\n");
    }
/*
    printf("enter 1 to ripit program and enter 0 to exit code.");
    scanf("%d", &num);

    if (num == 1)
    {
        goto label;
    }
    else
    {
        goto end;
    }
end:
*/
    return 0;
}
