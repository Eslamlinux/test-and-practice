#include <raylib.h>
//#include <iostream>
//#include <string>


const int scrwidth = 650;
const int scrhight = 350;
//const std::string scrname =  "First window";
const char scrname[] =  "First window";

int main()
{
    InitWindow(scrwidth,scrhight,scrname);
    SetTargetFPS(60);

    while(!WindowShouldClose())
    {
    BeginDrawing();
    ClearBackground(BLUE);
    DrawText("Hello , this is the first gui with raylib\n made by Eslam Linux",140,150,25,WHITE);

    EndDrawing();



    }

    CloseWindow();

    return 0;
}
