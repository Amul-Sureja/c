// *******reading a file*******
/*
#include <stdio.h>
int main()
{
    FILE * ptr = NULL;
    char string[65];
    ptr = fopen("lang.txt","r");
    fscanf(ptr,"%s",string);
    printf("the contant of this file has %s\n",string);
    return 0;
}
*/

// *******wrinting a file*******
/*
#include <stdio.h>
int main()
{
    FILE * ptr = NULL;
    char string[65] = "\nthis is a file";
    ptr = fopen("lang.txt","a");
    fprintf(ptr,"%s",string);
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    FILE * ptr = NULL;
    ptr = fopen("lang.txt","r");
    char c = fgetc(ptr);
    printf("the character i read was %c \n", c);
    c = fgetc(ptr);
    printf("the character i read was %c \n", c);
    c = fgetc(ptr);
    printf("the character i read was %c \n", c);
    c = fgetc(ptr);
    printf("the character i read was %c \n", c);
    c = fgetc(ptr);
    printf("the character i read was %c \n", c);
    c = fgetc(ptr);
    printf("the character i read was %c \n", c);

    fclose(ptr);
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    FILE * ptr = NULL;
    ptr = fopen("lang.txt","r");
    char str[7];
    fgets(str, 3, ptr);
    printf("the string is %s \n", str);

    fclose(ptr);
    return 0;
}
*/

/*
#include <stdio.h>
int main()
{
    FILE * ptr = NULL;
    ptr = fopen("lang.txt","w");
    fputc('a', ptr);
    fputs("\namul is breave", ptr);

    fclose(ptr);
    return 0;
}
*/
