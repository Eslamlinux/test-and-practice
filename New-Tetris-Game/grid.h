#pragma once
#include <raylib.h>
#include <vector>
class Grid
{
    int num_rows;
    int num_cols;
    int cell_size;
    std::vector<Color>colors;
    public:
    Grid();
    int grid[20][10];
    void initialize();
    void print();
    void Draw();
    bool IsCellOut(int row, int column);
    ~Grid();
};