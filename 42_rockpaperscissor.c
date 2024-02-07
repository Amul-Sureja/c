#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int getRandomTime(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char char1, char char2)
{
    if (char1 == char2)
    {
        return -1;
    }
    else if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else if ((char2 == 'p') && (char2 == 'r'))
    {
        return 0;
    }
    else if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if ((char2 == 's') && (char2 == 'p'))
    {
        return 0;
    }
    else if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else if ((char2 == 'p') && (char2 == 'r'))
    {
        return 0;
    }
}
int main()
{
    int playerscore = 0, computerscore = 0, temp;
    char playerchar, computerchar;
    char disk[] = {'r', 'p', 's'};

    printf("****************  Rock, Paper, Scissors Game  **************** \n\n");

    for (int i = 1; i < 4; i++)
    {
        printf("******************      round = %d      ******************\n\n",i);
        printf("====> player 1's turn  : \n");
        printf("Enter\n 1 : Rock\n 2 : Paper\n 3 : Scissors\n");
        printf("enter player'1 number : \n");
        scanf("%d", &temp);
        // getchar();
        playerchar = disk[temp - 1];
        printf("your choise : %c \n", playerchar);

        printf("====> computer turn : \n");
        printf("Enter\n 1 : Rock\n 2 : Paper\n 3 : Scissors\n");
        computerchar = disk[getRandomTime(3)];
        printf("computer choise : %c\n\n", computerchar);

        if (greater(computerchar, playerchar) == 1)
        {
            computerchar += 1;
            printf("****************  CPU Got it!  ****************\n\n");
        }
        else if (greater(computerchar, playerchar) == -1)
        {
            playerscore += 1;
            computerscore += 1;
            printf("****************  It's a Draw  ****************\n\n");
        }
        else
        {
            playerscore += 1;
            printf("****************  You Got it!  ****************\n\n");
        }
        printf("YOU : %d\nCOMPUTER : %d\n\n",playerscore, computerscore);
    }
    if (playerscore > computerscore)
    {
        printf("Your Win!\n");
    }
    else if (playerscore < computerscore)
    {
        printf("Computer Win!\n");
    }
    else
    {
        printf("Match Draw!\n");
    }
    return 0;
}