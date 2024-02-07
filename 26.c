// function of string

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "amul sureja";
    char s2[] = "ravi";
    char s3[54];
    // printf("the strcmp for s1, s2 return %d \n", strcmp(s1, s2));
    // printf("the lenght of s1 %d \n", strlen(s1));
    // printf("the lenght of s2 %d \n", strlen(s2));
    // printf("the reverse string of s1 is : ");
    // puts(strrev(s1));
    puts(strcat(s1, s2));
    // strcpy(s3, strcat(s1, s2));
    // puts(s3);

    return 0;
}

/*
char str[56];
gets(str);  // input of string
printf("%s", str);   // print of string
puts(str);   <=aliter   // print of string
*/