#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game
{
    std::vector<Block>blocks;
    Block CurrentBlock, NextBlock;
    bool IsBlockOut();

    public:
    Game();
    Block GetRandBlock();
    std::vector<Block> GetAllBlocks();
    void Draw();
    void HandeleInput();
    void MoveBLeft();
    void MoveBRight();
    void MoveBDown();
    Grid grid;
};