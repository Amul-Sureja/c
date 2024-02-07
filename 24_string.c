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

// int main()
// {
//     char str[] = {'a','m','u','l','\0'};
//     printScr(str);
//     return 0;
// }

// int main()
// {
//     char str[] = "harry";
//     printScr(str);
//     return 0;
// }

int main()
{
    char str[6] = "harry";
    printScr(str);
    return 0;
}

/*
// user input string
char str[54];
gets(str);
printf("%s",str);  //print string 
puts(str); //print string 
*/