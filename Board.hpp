//
//  Board.hpp
//  Connect4New
//
//  Skeleton created by Stijn Slebos  and Sanne Metten on 19-01-19.
//
//

#ifndef Board_hpp
#define Board_hpp

#include <stdio.h>
#include "Field.hpp"

#define ROWS 7
#define COLUMNS 6




class Board{
public:
    Board();
    Board(const Board&) = default;

    
    void draw();
    void doMove(int, Color);
    
    Field Grid[ROWS][COLUMNS];
    
    bool canMove(int);
    int nextMove(int);
    Color lastMove();
    
    bool isWinner(Color);
    
    Color lastTurn;
    
    void reset();
    
};


#endif /* Board_hpp */
