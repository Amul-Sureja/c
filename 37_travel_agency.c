#include <stdio.h>
struct Driver
{
    char name[50];
    char dino[50];
    char rout[50];
    int kms;
};

int main()
{
    struct Driver d1;
    printf("enter the details of driver no. 1 \n");
    printf("enter the name of first driver \n");
    scanf("%s",&d1.name);
    printf("enter the dino of first driver \n");
    scanf("%s",&d1.dino);
    printf("enter the rout of first driver \n");
    scanf("%s",&d1.rout);
    printf("enter the kms of first driver \n");
    scanf("%d",&d1.kms);
    printf("\t\t\t------------information of driner------------\t\t\t\n");
    printf("driver name = %s \n",d1.name);
    printf("id no = %s \n",d1.dino);
    printf("rout = %s \n",d1.rout);
    printf("kms = %d \n",d1.kms);
    return 0;
}