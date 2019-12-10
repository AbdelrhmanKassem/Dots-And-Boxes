#include "game.h"




void main_menu (void)
{
    int s;
    clear_player_data();
    turn=true;
    system("cls");
    printf("\033[1;33m########   #######  ########  ######\033[1;32m      ###    ##    ## ######## \033[1;31m  ########   #######  ##     ## ########  ######\n");
    printf("\033[1;33m##     ## ##     ##    ##    ##    ##\033[1;32m    ## ##   ###   ## ##     ##\033[1;31m  ##     ## ##     ##  ##   ##  ##       ##    ## \n");
    printf("\033[1;33m##     ## ##     ##    ##    ##      \033[1;32m   ##   ##  ####  ## ##     ##\033[1;31m  ##     ## ##     ##   ## ##   ##       ## \n");
    printf("\033[1;33m##     ## ##     ##    ##     ######  \033[1;32m ##     ## ## ## ## ##     ##\033[1;31m  ########  ##     ##    ###    ######    ###### \n");
    printf("\033[1;33m##     ## ##     ##    ##          ## \033[1;32m ######### ##  #### ##     ##\033[1;31m  ##     ## ##     ##   ## ##   ##             ## \n");
    printf("\033[1;33m##     ## ##     ##    ##    ##    ## \033[1;32m ##     ## ##   ### ##     ##\033[1;31m  ##     ## ##     ##  ##   ##  ##       ##    ## \n");
    printf("\033[1;33m########   #######     ##     ######  \033[1;32m ##     ## ##    ## ########\033[1;31m   ########   #######  ##     ## ########  ######\033[0m\n\n\n\n\n\n");

    printf("\033[1;34m\t\t\t\t\t\t\t1.New Game\n\t\t\t\t\t\t\t2.Load Game\n\t\t\t\t\t\t\t3.Top 10\n\t\t\t\t\t\t\t4.Exit\n\n");
    printf("Enter The Number Corresponding To Your Choice: \033[0m");
    while (1){
        s=0;
        scanf("%d",&s);

        switch (s){
            case 1:
                difficulty_select();
                break;
            case 2:
                ////////
                break;
            case 3:
                ///////
                break;
            case 4:
                exit(0);
                break;
            case 0:
                getchar();
            default:
                invalid_input();

        }
    }
}

void difficulty_select (void)
{
    system("cls");
    printf("\033[1;33m########   #######  ########  ######\033[1;32m      ###    ##    ## ######## \033[1;31m  ########   #######  ##     ## ########  ######\n");
    printf("\033[1;33m##     ## ##     ##    ##    ##    ##\033[1;32m    ## ##   ###   ## ##     ##\033[1;31m  ##     ## ##     ##  ##   ##  ##       ##    ## \n");
    printf("\033[1;33m##     ## ##     ##    ##    ##      \033[1;32m   ##   ##  ####  ## ##     ##\033[1;31m  ##     ## ##     ##   ## ##   ##       ## \n");
    printf("\033[1;33m##     ## ##     ##    ##     ######  \033[1;32m ##     ## ## ## ## ##     ##\033[1;31m  ########  ##     ##    ###    ######    ###### \n");
    printf("\033[1;33m##     ## ##     ##    ##          ## \033[1;32m ######### ##  #### ##     ##\033[1;31m  ##     ## ##     ##   ## ##   ##             ## \n");
    printf("\033[1;33m##     ## ##     ##    ##    ##    ## \033[1;32m ##     ## ##   ### ##     ##\033[1;31m  ##     ## ##     ##  ##   ##  ##       ##    ## \n");
    printf("\033[1;33m########   #######     ##     ######  \033[1;32m ##     ## ##    ## ########\033[1;31m   ########   #######  ##     ## ########  ######\033[0m\n\n\n\n\n\n");


    int s;
    printf("\033[1;34m\t\t\t\t\t\t\t1.Beginner 2x2\n\t\t\t\t\t\t\t2.Expert 5x5\n\t\t\t\t\t\t\t3.Back To Main Menu\n");
    printf("Enter The Number Corresponding To Your Choice: \033[0");
    while (1){
        s=0;
        scanf("%d",&s);

        switch (s){
            case 1:
                grid_s=5;
                player_mode_menu();
                break;
            case 2:
                grid_s=11;
                player_mode_menu();
                break;
            case 3:
                main_menu();
                break;
            case 0:
                getchar();
            default:
                invalid_input();

        }
    }

}


void player_mode_menu (void)
{
    clear_player_data ();
    clear_game_data();
    system("cls");
    printf("\033[1;33m########   #######  ########  ######\033[1;32m      ###    ##    ## ######## \033[1;31m  ########   #######  ##     ## ########  ######\n");
    printf("\033[1;33m##     ## ##     ##    ##    ##    ##\033[1;32m    ## ##   ###   ## ##     ##\033[1;31m  ##     ## ##     ##  ##   ##  ##       ##    ## \n");
    printf("\033[1;33m##     ## ##     ##    ##    ##      \033[1;32m   ##   ##  ####  ## ##     ##\033[1;31m  ##     ## ##     ##   ## ##   ##       ## \n");
    printf("\033[1;33m##     ## ##     ##    ##     ######  \033[1;32m ##     ## ## ## ## ##     ##\033[1;31m  ########  ##     ##    ###    ######    ###### \n");
    printf("\033[1;33m##     ## ##     ##    ##          ## \033[1;32m ######### ##  #### ##     ##\033[1;31m  ##     ## ##     ##   ## ##   ##             ## \n");
    printf("\033[1;33m##     ## ##     ##    ##    ##    ## \033[1;32m ##     ## ##   ### ##     ##\033[1;31m  ##     ## ##     ##  ##   ##  ##       ##    ## \n");
    printf("\033[1;33m########   #######     ##     ######  \033[1;32m ##     ## ##    ## ########\033[1;31m   ########   #######  ##     ## ########  ######\033[0m\n\n\n\n\n\n");


    int s;
    printf("\033[1;34m\t\t\t\t\t\t\t1.Player VS AI\n\t\t\t\t\t\t\t2.Player VS Player\n\t\t\t\t\t\t\t3.Back To Main Menu\n");
    printf("Enter The Number Corresponding To Your Choice: \033[0");
    while (1){
        s=0;
        scanf("%d",&s);

        switch (s){
            case 1:
                draw_grid();
                break;
            case 2:
                draw_grid();
                break;
            case 3:
                main_menu();
                break;
            case 0:
                getchar();
            default:
                invalid_input();
                break;

        }
    }
}


void invalid_input (void)
{
    printf("\n\t\t\t\t\tPlease Enter A Valid Input:");
}




void draw_grid (void)
{
    if(p1.moves+p2.moves==0) T_start=time(NULL);
    T_now=time(NULL)-T_start;
    system("cls");
    printf("\033[1;33m########   #######  ########  ######\033[1;32m      ###    ##    ## ######## \033[1;31m  ########   #######  ##     ## ########  ######\n");
    printf("\033[1;33m##     ## ##     ##    ##    ##    ##\033[1;32m    ## ##   ###   ## ##     ##\033[1;31m  ##     ## ##     ##  ##   ##  ##       ##    ## \n");
    printf("\033[1;33m##     ## ##     ##    ##    ##      \033[1;32m   ##   ##  ####  ## ##     ##\033[1;31m  ##     ## ##     ##   ## ##   ##       ## \n");
    printf("\033[1;33m##     ## ##     ##    ##     ######  \033[1;32m ##     ## ## ## ## ##     ##\033[1;31m  ########  ##     ##    ###    ######    ###### \n");
    printf("\033[1;33m##     ## ##     ##    ##          ## \033[1;32m ######### ##  #### ##     ##\033[1;31m  ##     ## ##     ##   ## ##   ##             ## \n");
    printf("\033[1;33m##     ## ##     ##    ##    ##    ## \033[1;32m ##     ## ##   ### ##     ##\033[1;31m  ##     ## ##     ##  ##   ##  ##       ##    ## \n");
    printf("\033[1;33m########   #######     ##     ######  \033[1;32m ##     ## ##    ## ########\033[1;31m   ########   #######  ##     ## ########  ######\033[0m\n\n");

    if (turn){
    printf("\033[1;32m    Time:%d                    Turn: %s\n\n",T_now,p1.name);
    }
    else{
    printf("\033[1;32m    Time:%d                    Turn: %s\n\n",T_now,p2.name);
    }
    printf("\033[1;31m    Player1: %s       \033[1;34m      Player2: %s\n",p1.name,p2.name);
    printf("\033[1;31m    Moves: %d         \033[1;34m      Moves: %d\n",p1.moves,p2.moves);
    printf("\033[1;31m    Score: %d         \033[1;34m      Score: %d\n\n\n\033[0m",p1.score,p2.score);


    printf("    0   ");
    for (int i=1;i<grid_s+1;i++) {
            if (i<9) printf("%d  ",i);
            else printf("%d ",i);}
    printf("\n");

    int j;
    for (int i=0;i<grid_s;i++){

        if(i<9)printf("    %d   ",i+1);
        else printf("   %d   ",i+1);

        for (j=0;j<grid_s;j++){
            if ((i%2)==0){
                if(j%2==0){draw_dot();}
                else if(lines[i][j]){
                    if (player[i][j]==1) redh();
                    else blueh();
                }
                else eh();
            }
            else{
                if (j%2==0){
                    if(lines[i][j]){
                        if(player[i][j]==1) redv();
                        else bluev();
                    }
                    else ev();
                }
                else{
                    if(player[i][j]==0) boxe();
                    else if (player[i][j]==1) boxp1();
                    else if (player[i][j]==2) boxp2();
                }

            }
        }
        printf("\n");
    }


    if(grid_s==5){
        if (p1.moves+p2.moves==12)
            game_over();
    }
    else if(grid_s==11){
        if (p1.moves+p2.moves==60)
            game_over();
    }
    printf("\n");
    take_input();
}
void draw_dot (void)
{
    printf("\033[1;33m%c\033[0m",254);
}


void redh (void)
{
    printf("\033[0;31m%c%c%c%c%c\033[0m",196,196,196,196,196,196);
}

void redv (void)
{
    printf("\033[0;31m%c\033[0m",179);
}

void blueh (void)
{
    printf("\033[0;34m%c%c%c%c%c\033[0m",196,196,196,196,196,196);
}

void bluev (void)
{
    printf("\033[0;34m%c\033[0m",179);
}

void ev (void)
{
    printf(" ");
}

void eh (void)
{
    printf("     ");
}

void boxp1 (void)
{
    printf("\033[1;31m P 1 \033[0m");

}

void boxp2 (void)
{
    printf("\033[1;34m P 2 \033[0m");

}

void boxe (void)
{
 printf("     ");
}

void clear_player_data (void)
{
    p1.score=0;
    p2.score=0;
    p1.color[15]="Red";
    p2.color[15]="Blue";
    p1.name[15]="P 1";
    p2.name[15]="P 2";
    p1.moves=0;
    p2.moves=0;
}

void game_over (void)
{
    system("cls");
    printf("\033[1;33m########   #######  ########  ######\033[1;32m      ###    ##    ## ######## \033[1;31m  ########   #######  ##     ## ########  ######\n");
    printf("\033[1;33m##     ## ##     ##    ##    ##    ##\033[1;32m    ## ##   ###   ## ##     ##\033[1;31m  ##     ## ##     ##  ##   ##  ##       ##    ## \n");
    printf("\033[1;33m##     ## ##     ##    ##    ##      \033[1;32m   ##   ##  ####  ## ##     ##\033[1;31m  ##     ## ##     ##   ## ##   ##       ## \n");
    printf("\033[1;33m##     ## ##     ##    ##     ######  \033[1;32m ##     ## ## ## ## ##     ##\033[1;31m  ########  ##     ##    ###    ######    ###### \n");
    printf("\033[1;33m##     ## ##     ##    ##          ## \033[1;32m ######### ##  #### ##     ##\033[1;31m  ##     ## ##     ##   ## ##   ##             ## \n");
    printf("\033[1;33m##     ## ##     ##    ##    ##    ## \033[1;32m ##     ## ##   ### ##     ##\033[1;31m  ##     ## ##     ##  ##   ##  ##       ##    ## \n");
    printf("\033[1;33m########   #######     ##     ######  \033[1;32m ##     ## ##    ## ########\033[1;31m   ########   #######  ##     ## ########  ######\033[0m\n\n\n\n\n\n");
    printf("\033[1;32m\t\t\t\t\t\t\tGAME OVER\n");
    if(p1.score>p2.score) printf("\t\t\t\t\t\t\tP 1 WINS!!\n");
    else if(p1.score<p2.score) printf("\t\t\t\t\t\t\tP 2 WINS!!\n");
    else printf("\t\t\t\t\t\t\tDRAW!!");
    printf("\t\t\t\t\t\t\tEnter 1 To Go Back To Main Menu\033[0m");
    int s;
    while (1){
        s=0;
        scanf("%d",&s);
        switch (s){
            case 1:
                main_menu();
                break;
            case 0:
                getchar();
            default:
                invalid_input();
                break;
        }
    }



}
void clear_game_data(void)
{
    for(int i=0;i<11;i++){
        for(int j=0;j<11;j++){
            lines[i][j]=false;
            player[i][j]=0;
        }
    }
}
