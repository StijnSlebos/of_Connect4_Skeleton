//
//  Field.cpp
//  Connect4New
//
//  Skeleton created by Stijn Slebos and Sanne Metten on 19-01-19.
//
//

#include "Field.hpp"

Field::Field(){
    myColor = empty;
}

void Field::setPosition(int row, int column){
    myRow = row;
    myColumn = column;
    x = GRID_OFFSET;
    x += (myRow*SQUARE_SIZE);
    y = GRID_OFFSET;
    y += (myColumn*SQUARE_SIZE);
}


void Field::draw(){
    ofSetColor(255);
    ofSetLineWidth(5);
    ofDrawRectangle(x, y, SQUARE_SIZE, SQUARE_SIZE);
    ofSetColor(0);
    ofDrawLine(x, y, x+SQUARE_SIZE, y);
    ofDrawLine(x, y, x, y+SQUARE_SIZE);
    ofDrawLine(x, y+SQUARE_SIZE, x+SQUARE_SIZE, y+SQUARE_SIZE);
    ofDrawLine(x+SQUARE_SIZE, y, x+SQUARE_SIZE, y+SQUARE_SIZE);
    
    if(myColor == red){
        ofSetColor(255, 0, 0);
    }else if(myColor == yellow){
        ofSetColor(255, 255, 0);
    }else if(myColor == empty){
        ofSetColor(255);
    }
    ofDrawEllipse(x+SQUARE_SIZE/2, y+SQUARE_SIZE/2, SQUARE_SIZE*4/5, SQUARE_SIZE*4/5);
}

void Field::setColor(Color color){
    myColor = color;
}

Color Field::getColor(){
    return myColor;
}
