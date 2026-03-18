#pragma once
#include "position.h"
#include <vector>
#include <map>
#include "color.h"
#include <raylib.h>

class Block
{
    int cellSize;
    int rotationState;
    std::vector<Color>colors;
    int rowOffset, ColumnOffset;
    public:
    Block();
    int id;
    std::map<int ,std::vector<Position>> cells;
    void Draw();

    void Move(int rows, int columns);
    std::vector<Position> GetCellPos();
};