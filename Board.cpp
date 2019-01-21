//
//  Board.cpp
//  Connect4New
//
//  Skeleton created by Stijn Slebos on 19-01-19.
//
//

#include "Board.hpp"

Board::Board(){
    for(int x = 0; x<ROWS; x++){
        for(int y = 0; y<COLUMNS; y++){
            Grid[x][y].setPosition(x,y);
        }
    }
    
    int i = std::rand()%7;
    //Grid[i][3].setColor(red);
    lastTurn = yellow;
}

void Board::draw(){
    for(int x = 0; x<ROWS; x++){
        for(int y = 0; y<COLUMNS; y++){
            Grid[x][y].draw();
        }
    }
}


void Board::doMove(int row, Color turn){
        if(canMove(row)){
        int column = nextMove(row);
        Grid[row][column].setColor(turn);
        lastTurn = turn;
    }
    
}

bool Board::canMove(int row){
    for(int y = 0; y< COLUMNS; y++){
        if(Grid[row][y].getColor() == empty){
            return true;
        }
    }
    return false;
}

int Board::nextMove(int row){
    for(int y = COLUMNS-1; y> -1; y--){
        if(Grid[row][y].getColor() == empty){
            return y;
        }
    }
    return 0;
}

Color Board::lastMove(){
    return lastTurn;
}

void Board::reset(){
    for(int x = 0; x<ROWS; x++){
        for(int y = 0; y<COLUMNS; y++){
            Grid[x][y].setColor(empty);
        }
    }
}

bool Board::isWinner(Color Player){
//Vertical
    for(int row = 0; row< ROWS; row++){
        for(int column  = 0; column < COLUMNS-3; column++){
            if(Grid[row][column].getColor() == Player &&
               Grid[row][column+1].getColor() == Player &&
               Grid[row][column+2].getColor() == Player &&
               Grid[row][column+3].getColor() == Player){
                return true;
            }
        }
    }
   
    
//Horizontal
    for(int column  = 0; column < COLUMNS; column++){
        for(int row = 0; row< ROWS-3; row++){
            if(Grid[row][column].getColor() == Player &&
               Grid[row+1][column].getColor() == Player &&
               Grid[row+2][column].getColor() == Player &&
               Grid[row+3][column].getColor() == Player){
                return true;
            }
        }
    }
    
//Diagonal NE
    for(int column  = COLUMNS - 1; column > 2; column--){ //checking for starting at column 5,4,3; so 6-1=5 and >2
        for(int row = 0; row< ROWS-3; row++){
            if(Grid[row][column].getColor() == Player &&
               Grid[row+1][column-1].getColor() == Player &&
               Grid[row+2][column-2].getColor() == Player &&
               Grid[row+3][column-3].getColor() == Player){
                return true;
            }
        }
    }
    
//Diagonal NW
    for(int column  = 0; column < COLUMNS -3; column++){
        for(int row = 0; row< ROWS-3; row++){
            if(Grid[row][column].getColor() == Player &&
               Grid[row+1][column+1].getColor() == Player &&
               Grid[row+2][column+2].getColor() == Player &&
               Grid[row+3][column+3].getColor() == Player){
                return true;
            }
        }
    }
    
    return false;
    
    
    
}










