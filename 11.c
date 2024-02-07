#include <stdio.h>

int main()
{
    char input;
    float kmstomiles = 0.621371;
    float inchestofoot = 0.8333333;
    float cmstoinches = 0.393701;
    float poundtokg = 0.453592;
    float inchetometer = 0.0254;
    float first, secound;

    while (1)
    {
        printf("enter the enput charator q to quit \n 1. inches to foot \n 2. km to miles \n 3. cms to inches \n 4.pound to kg \n 5. inches to meter \n");
        scanf(" %c", &input);
        printf("the charator is '%c'", input);

        switch (input)
        {
        case 'q':
            printf("quitting the program.....");
            goto end;
            break;

        case '1':
            printf("enter quantity in term of first unit\n");
            scanf("%f", &first);
            secound = first * 0.621371;
            printf("%f inches is equal to %f foot\n\n\n", first, secound);
            break;

        case '2':
            printf("enter quantity in term of first unit\n");
            scanf("%f", &first);
            secound = first * 0.8333333;
            printf("%f km is equal to %f mile\n", first, secound);
            break;

        case '3':
            printf("enter quantity in term of first unit\n");
            scanf("%f", &first);
            secound = first * 0.393701;
            printf("%f cm is equal to %f inch\n", first, secound);
            break;

        case '4':
            printf("enter quantity in term of first unit\n");
            scanf("%f", &first);
            secound = first * 0.453592;
            printf("%f pound is equal to %f kg\n", first, secound);
            break;

        case '5':
            printf("enter quantity in term of first unit\n");
            scanf("%f", &first);
            secound = first * 0.0254;
            printf("%f inch is equal to %f meter\n", first, secound);
            break;

        default:
            break;
        }
    }
end:
    return 0;
}
