//
//  gameManager.cpp
//  Connect4New
//
//  Skeleton created by Stijn Slebos and Sanne Metten on 19-01-19.
//
//

#include "gameManager.hpp"


gameManager::gameManager(){
    turn = (Color)(-Connect4.lastMove());
    opponent.setColor((Color)(-turn));
}

void gameManager::update(){
         turn = (Color)(-Connect4.lastMove());
    
    if(Connect4.isWinner(red)){
        std::cout << "Red Wins!" << endl;
        Connect4.reset();
    }
    if(Connect4.isWinner(yellow)){
        std::cout << "Yellow Wins!" << endl;
        Connect4.reset();
    }
    
    if(turn == opponent.getColor()){
        Connect4.doMove(opponent.getNextMove(Connect4), opponent.getColor());
    }
    
    
    /*
     if(turn == coputer.turn){
     doComputerTurn
     }
     
     if(isWon){
     
     end();
     }
     */
}
void gameManager::draw(){
    Connect4.draw();
}

void gameManager::input(char input){
    int row = 0;
    switch (input) {
        case '1':
            row = 0;
            break;
        case '2':
            row = 1;
            break;
        case '3':
            row = 2;
            break;
        case '4':
            row = 3;
            break;
        case '5':
            row = 4;
            break;
        case '6':
            row = 5;
            break;
        case '7':
            row = 6;
            break;
        default:
            break;
    }

  
    if(turn == (Color)(-opponent.getColor())){
    Connect4.doMove(row, turn);
    }
    /*
     if(turn == human.turn){
     connect4.doMove(char);
     }
     */
}


