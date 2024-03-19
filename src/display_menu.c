#include<stdio.h>
#include<stdlib.h>

int display_menu()
{
    int menu;

    system("clear");

    printf("Tetris jbk\n");
    printf("------------------------------------------\n");
    printf("\t\tGAME MENU\n");
    printf("------------------------------------------\n");
    printf("1. GAME START\n");
    printf("2. Search history\n");
    printf("3. Record Output\n");
    printf("4. EXIT\n");

    scanf("%d",&menu);
    return menu;
}