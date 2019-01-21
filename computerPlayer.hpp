//
//  computerPlayer.hpp
//  Connect4New
//
//  Skeleton created by Stijn Slebos on 19-01-19.
//
//

#ifndef computerPlayer_hpp
#define computerPlayer_hpp

#include <stdio.h>
#include "Board.hpp"


class computerPlayer{
public:
    computerPlayer();

    int getNextMove(Board);


    Color getColor();
    void setColor(Color);

    Color myColor;
    


};

#endif /* computerPlayer_hpp */
