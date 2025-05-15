#include <stdio.h>
#include <stdlib.h>
#include "board.h"

void initialize_board(int board[SIZE][SIZE]){
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            board[i][j] = 0;
        }
    }
}

void display_board(int board[SIZE][SIZE]){
    printf("\n");
    for(int i = 0; i < SIZE; i++){
            //printing the horizontal divider every 3 rows
            if(i % SUBGRID_SIZE == 0 && i != 0) {
                printf("------+-------+------\n");
            }
            for(int j = 0; j < SIZE; j++){
                //printing vertical rows every 3 columns
                if(j % SUBGRID_SIZE == 0 && j != 0){
                    printf("| ");
                }
                //printing dots for empty cell
                if(board[i][j] == 0){
                    printf(". ");
                }else{
                    printf("%d", board[i][j]);
                }

            }
            printf("\n");
    }
    printf("\n");
}

int main()
{
    int board[SIZE][SIZE];

    initialize_board(board);
    display_board(board);

    return 0;
}
