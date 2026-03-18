#include <raylib.h>
#include "game.h"

#define G_Hight_Y 600
#define G_Width_X 300
#define Main_Title "test game"

int main()
{
    InitWindow(G_Width_X,G_Hight_Y,Main_Title); // النافذذة الرئسية
    Color background = {166,0,247,255}; // {255,0,0,255} يمكن استخدام اسم اللون او الار جي بي الخاص باللون  
    SetTargetFPS(60); // سرعة اللعبة
    Game thegame ;

while(!WindowShouldClose())
    {
        thegame.HandeleInput();
        BeginDrawing(); //لبداية رسم النافذة
        ClearBackground(DARKBLUE); // لتنظيف واضافة خلفية جديدة
        thegame.Draw();

        EndDrawing(); // لانهاء الرسم وتدمير مكونات الرسم

    }

    CloseWindow(); //لاغلاق وتدمير النافذة
    return 0;
}