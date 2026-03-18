#include <iostream>
#include "grid.h"
#include "color.h"

    Grid::Grid()
    {
        num_rows = 10;
        num_cols = 20;
        cell_size = 30;
        initialize();
        colors = GetCellColor();
    }

    void Grid::initialize()
    {
        for(int row = 0 ; row < num_rows;row++)
        {
            for(int colum = 0 ; colum < num_cols;colum++)
            {
                grid[row][colum] = 0;
            }
        }
    }

    void Grid::print()
    {
        for(int colum = 0 ; colum < num_cols; colum++)
        {
            for(int row = 0 ; row < num_rows;row++)
            {
                std::cout << grid[row][colum] << " ";
            }
            std::cout << std::endl;
        }
    }



    void Grid::Draw()
    {
        for(int colum = 0;colum < num_cols; colum++)
        {
            for(int row = 0 ; row < num_rows; row++)
            {
                int cellValue = grid[row][colum];
                DrawRectangle(row * cell_size +1 ,colum * cell_size+1, cell_size -1 ,cell_size -1 , colors[cellValue]);
            }
        }

    }

    bool Grid::IsCellOut(int row,int column)
    {
        if(row >=0 && row < num_rows && column >= 0 && column < num_cols)
        {
            return false;
        }
        return true;

    }

    Grid::~Grid(){}

