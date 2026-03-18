#include "block.h"

Block::Block()
{
    cellSize  = 30;
    rotationState = 0;
    colors = GetCellColor();
    rowOffset = 0;
    ColumnOffset = 0;
}
void Block::Draw()
{
    std::vector<Position> tiles = GetCellPos();
    for(Position item : tiles)
    {
        DrawRectangle(item.column * cellSize + 1, item.row * cellSize + 1, cellSize - 1, cellSize -1,colors[id]);
    }
    
}

void Block::Move(int rows, int columns)
{
    rowOffset+= rows;
    ColumnOffset += columns;

}

std::vector<Position>Block::GetCellPos()
{
     std::vector<Position>Tiles =cells[rotationState];
    std::vector<Position>MovedTiles;
    for(Position item: Tiles)
    {
        Position newPos = Position(item.row + rowOffset,item.column + ColumnOffset);
        MovedTiles.push_back(newPos);
    }
    return MovedTiles;

}