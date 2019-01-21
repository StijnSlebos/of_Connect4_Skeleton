//
//  Field.hpp
//  Connect4New
//
//  Skeleton created by Stijn Slebos on 19-01-19.
//
//

#ifndef Field_hpp
#define Field_hpp

#include <stdio.h>
#include "ofMain.h"

#define SQUARE_SIZE 80
#define GRID_OFFSET 20;

enum Color{
    red = -1,
    empty = 0,
    yellow = 1
};

class Field{
public:
    Field();
    void setPosition(int,int);
    void draw();
    void setColor(Color);
    Color getColor();
    
    
    Color myColor;
    int myRow, myColumn;
    int x,y;
};


#endif /* Field_hpp */
