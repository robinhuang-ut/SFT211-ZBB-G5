#ifndef MAP_H
#define MAP_H

struct Map
{
    char squares[MAP_ROWS][MAP_COLS];
    int numRows;
    int numCols;
};

#endif