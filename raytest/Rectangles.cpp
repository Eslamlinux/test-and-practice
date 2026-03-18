#include <raylib.h>
#define screenwidth 800
#define screenhight 450
#define Title "Test"
int main()
{

    InitWindow(screenwidth,screenhight,Title);
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLUE);

        DrawRectangle(50,50,200,110,RED);


        Vector2 po {200,150};
        Vector2 si{120,90};

        DrawRectangleV(po,si,GREEN);

        Rectangle r1 = {350,200,150,100};
        DrawRectangleRec(r1,YELLOW);
        // DrawRectangleLines(350,200,150,100,RED);
        DrawRectangleLinesEx(r1,5,RED);

        DrawRectangleLines(400,350,100,60,RED);


        EndDrawing();
        
    }
    

    CloseWindow();

}