//
//  computerPlayer.cpp
//  Connect4New
//
//  Skeleton created by Stijn Slebos on 19-01-19.
//
//

#include "computerPlayer.hpp"

computerPlayer::computerPlayer(){
}

Color computerPlayer::getColor(){
    return myColor;
}

void computerPlayer::setColor(Color color){
    myColor = color;
}

int computerPlayer::getNextMove(Board testBoard){
        int nextMove = std::rand()%ROWS;
        return nextMove;
}
