#include <stdio.h>
#include <string.h>

char *replaceword(const char *str, const char *oldworld, const char *newworld)
{
    char *resultString;
    int i, count = 0;
    int newWorldLength = strlen(newWorld);
    int oldorldLength = strlen(oldWorld);

    for (int i = 0; i < str != '\0'; i++)
    {
        
    }
    

}
int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;
    ptr = fopen("bill.txt", "r");
    ptr2 = fopen("genBill.txt", "w");
    char str[200];
    fgets(str, 200, ptr);
    printf("The given bill template was : %s \n", str);

    // call the replaceword formation and genarated new str
    char *newstr = str;
    printf("The actual bill genated is : %s \n", newstr);

    fprintf(ptr2 ,"%s", newstr);
    fclose(ptr);
    fclose(ptr2);

    return 0;
}