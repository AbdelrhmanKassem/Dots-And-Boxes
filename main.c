#include "game.h"


int grid_s; //Grid size
int lines[11][11]; // Array which indicates whether there is a line/box or not
int player[11][11]; //Array which indicates whose line/box it is
int n,m,b1,b2,t; //variables for line positions taken from the user also for box positions to close after a move
int turn=1; //variable indication the turn
int box=0,box_count; //whether a box or more have been closed
struct player_data p1={0,"P 1",0}; //storing player 1 moves and score
struct player_data p2={0,"P 2",0};// storing player 2 moves and score
time_t T_start,T_now_mins,T_now_secs; //time management
int vsai=0; // indicates if you are playing vs the computer
int moves[60][4]; //array to store each line placed to be able to undo moves
bool undomove,undone; // indicates whether a move has been undone to enable redo
int total_moves; //total moves placed by both users
bool save=false; //to see if a game has been saved
FILE *file1; //game save files
FILE *file2; //top 10 file







int main()
{
    clear_game_data(); //sets all arrays to zero
    clear_player_data(); //sets player moves / score to zero
    main_menu(); //displays the main menu
    return 0;
}
