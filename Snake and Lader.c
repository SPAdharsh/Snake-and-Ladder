#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n,i=0,a,r,array[4]={1,1,1,1};
    char c;
    printf("Enter the no of players:");
    scanf("%d",&n);
    srand(time(NULL));
    printf("\nStart");
    scanf("%c",&c);
    while(i<n)
    {
        a=i;
        printf("\n\nPlayer %d's chance:",i+1);
        printf("\nPress enter to roll the dice:");
        scanf("%c",&c);
        r=(rand()%5)+1;
        printf("\nDice:%d",r);
        array[i]+=r;
        switch(array[i])
        {
            case 3: printf("\nLader");
                    array[i]=60;
                    break;
            case 6: printf("\nLader");
                    array[i]=27;
                    break;
            case 11:printf("\nLader");
                    array[i]=70;
                    break;
            case 25:printf("\nSnake");
                    array[i]=5;
                    break;
            case 35:printf("\nLader");
                    array[i]=56;
                    break;
            case 37:printf("\nSnake");
                    array[i]=1;
                    break;
            case 47:printf("\nSnake");
                    array[i]=9;
                    break;
            case 63:printf("\nLader");
                    array[i]=96;
                    break;
            case 65:printf("\nSnake");
                    array[i]=59;
                    break;
            case 68:printf("\nLader");
                    array[i]=93;
                    break;
            case 87:printf("\nSnake");
                    array[i]=54;
                    break;
            case 92:printf("\nSnake");
                    array[i]=69;
                    break;
            case 99:printf("\nSnake");
                    array[i]=62;
                    break;
        }
        printf("\nPlayer %d positon is:%d",i+1,array[i]);
        if(array[i]>=100)
        {
            printf("\nPlayer %d won the game",i+1);
            break;
        }
        ++i;
        if(a+1==n)
           i=0;
    }
    printf("\n\nCurrent positions of players:");
    printf("\nPlayer\t\t\tPosition");
    for(i=0;i<n;++i)
    {
        printf("\n");
        printf("%d\t\t\t%d",i+1,array[i]);
    }
    return 0;
}
