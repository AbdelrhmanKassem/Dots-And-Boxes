#include "game.h"


void take_input(void)
{

    printf("Enter Two Numbers First for Rows and Second for Columns Separated by a Space: ");
    scanf("%d %d",&n,&m);
    if ((n%2==0 && m%2==1 && n>=0 && m>=0)||(n%2==1 && m%2==0 && n>=0 &&m>=0)){
    if (n<=grid_s && m<=grid_s){
        n-=1;
        m-=1;
        if(lines[n][m]==false)proccess_input();
    }
    else take_input();
    }
    else take_input();
    take_input();
}

void proccess_input(void)
{
    if(lines[n][m]) take_input();
    else {
    lines[n][m]=true;
    if (turn) {
        player[n][m]=1;
        p1.moves++;
    }
    else {
        player[n][m]=2;
        p2.moves++;
    }
    check_box();
    }
}

void box_complete (void)
{
    if (box){
        if(turn){
            player[b1][b2]=1;
        }
        else player[b1][b2]=2;
    }
}

void check_box (void)
{
    t=2;
    box=false;
    if(turn) t=1;
    if (n%2==0){
        if(n==0){
            check_down();
            box_complete();

        }
        else if (n==grid_s-1){
            check_up();
            box_complete();

        }
        else {
            check_up();
            box_complete();
            check_down();
            box_complete();

        }
    }
    else{
        if(m==0){
            check_right();
            box_complete();
        }
       else if(m==grid_s-1){
            check_left();
            box_complete();
        }
        else{
            check_right();
            box_complete();
            check_left();
            box_complete();
        }
    }

    if (box){
        turn=!turn;
    }
    turn=!turn;
    draw_grid();



}


void check_down (void)
{
    if(lines[n+1][m-1] &&lines[n+1][m+1] &&lines[n+2][m]){
        box=true;
        b1=n+1;
        b2=m;
        player[n+1][m-1]=t;
        player[n+1][m+1]=t;
        player[n+2][m]=t;
        if(turn) p1.score++;
        else p2.score++;
    }
}

void check_up (void)
{
    if(lines[n-1][m+1] &&lines[n-1][m-1] &&lines[n-2][m]){
        box=true;
        b1=n-1;
        b2=m;
        player[n-1][m+1]=t;
        player[n-1][m-1]=t;
        player[n-2][m]=t;
        if(turn) p1.score++;
        else p2.score++;
    }
}

void check_right (void)
{
    if(lines[n+1][m+1] &&lines[n-1][m+1] &&lines[n][m+2]){
        box=true;
        b1=n;
        b2=m+1;
        player[n+1][m+1]=t;
        player[n-1][m+1]=t;
        player[n][m+2]=t;
        if(turn) p1.score++;
        else p2.score++;
    }
}

void check_left (void)
{
    if(lines[n-1][m-1] &&lines[n+1][m-1] &&lines[n][m-2]){
        box=true;
        b1=n;
        b2=m-1;
        player[n-1][m-1]=t;
        player[n+1][m-1]=t;
        player[n][m-2]=t;
        if(turn) p1.score++;
        else p2.score++;
    }
}
