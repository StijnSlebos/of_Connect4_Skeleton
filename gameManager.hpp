//
//  gameManager.hpp
//  Connect4New
//
//  Skeleton created by Stijn Slebos and Sanne Metten on 19-01-19.
//
//

#ifndef gameManager_hpp
#define gameManager_hpp

#include <stdio.h>
#include "Board.hpp"
#include "computerPlayer.hpp"


class gameManager{
public:
    gameManager();
    
    void update();
    void draw();
    
    void input(char);
    
    Board Connect4;
    computerPlayer opponent;
    
    Color turn;
//gameboard
//player class

};


#endif /* gameManager_hpp */
