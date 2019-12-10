#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


extern bool lines[11][11];
extern int player[11][11];
extern int grid_s;
extern bool turn;
extern bool box;
extern int n,m,b1,b2,t;
struct player_data{
    int score;
    char color [15];
    char name [15];
    int moves;
};
extern struct player_data p1;
extern struct player_data p2;
time_t T_start,T_now;












void mainmeu (void);
void difficulty_select (void);
void player_mode_menu (void);
void invalid_input (void);
void draw_grid (void);
void draw_dot (void);
void redh (void);
void redv (void);
void blueh (void);
void bluev (void);
void eh (void);
void ev (void);
void boxp1 (void);
void boxp2 (void);
void boxe (void);
void take_input(void);
void proccess_input(void);
void check_box (void);
void check_down (void);
void check_up (void);
void check_right (void);
void check_left (void);
void clear_player_data (void);
void game_over (void);
void clear_game_data(void);








#endif // GAME_H_INCLUDED
