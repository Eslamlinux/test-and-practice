#include <raylib.h>
//#include <iostream>
//#include <stdio.h>


const int scrwidth = 650;
const int scrhight = 350;
const char scrname[] =  "First window";

int main()
{
    InitWindow(scrwidth,scrhight,scrname);
    SetTargetFPS(60);

    while(!WindowShouldClose())
    {
    BeginDrawing();
    ClearBackground(BLUE);

    EndDrawing();



    }

    CloseWindow();

    return 0;
}
