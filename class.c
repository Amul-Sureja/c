// #include <stdio.h>
// int main()
// {
//     float radius, degree;
//     printf("enter any number ib degree : \n");
//     scanf("%f", &degree);
//     radius = degree*0.017453;
//     printf("tour number convert degree to radius : %f \n",radius);
//     printf("sin(%f) = %f \n", radius, sin(radius));
//     printf("cos(%f) = %f \n", radius, cos(radius));
//     printf("tan(%f) = %f \n", radius, tan(radius));
//     if (tan(90))
//     {
//         printf("tan(90) is undefined \n");
//     } else {
//         goto end;
//     }
//     end:
//     return 0;
// }

# include <stdio.h>
# include <conio.h>
int main()
{
    int i, j;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("%d%d ", i, j);
        }
            printf(" \n");
    }
}