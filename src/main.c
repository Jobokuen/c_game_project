#define GAME_START   0
#define GAME_END     1

#include<stdio.h>

int display_menu();
void display_tetris();
int game;


int game_start()
{
    int signal()
    signal(sigytalrm, update);
    timal()

    if (gmae == game_start)
    {
        display_tetris
    }
    
    game = GAME_EMD;
}

int main(void)
{
    int menu = 1;
    menu = display_menu();
    switch(menu)
    {
        case 1: 
            printf("GAME START\n");
            menu = game_start();
            break;
        case 2:
            printf("Search history\n");
            break;
        case 3:
            printf("Record Output\n");
            break;
        case 4:
            printf("EXIT\n");
            break;
    }
    return 0;
}