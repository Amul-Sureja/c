#include <stdio.h>

void printScr(char str[])
{
    int i=0;
    while (str[i] != '\0')
    {
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    char str[100];
    gets(str);
    printf("using costume function printStr : ");
    printScr(str);
    printf("using printf %s \n",str);
    printf("using puts : ");
    puts(str);
    // scan ka use karke string input le sakte hai...... 
    return 0;
}

