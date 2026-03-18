#include <raylib.h>
#include <iostream>
int main()
{
    InitWindow(800,600,"Ball");
    SetTargetFPS(60);
    int ballx  = 400;
    int bally  = 400;
    Color currencolor = RED;
    float timepassed = 0.0f;


    Font newfont = LoadFont("BoldPixelsFont.ttf");
    while(!WindowShouldClose())
    {
        timepassed += GetFrameTime();

        if(timepassed > 2.0f)
        {
            if(currencolor.r == 255 && currencolor.g == 0 && currencolor.b ==0)
            {
                currencolor = BLUE;
            }
            else if(currencolor.b == 255 && currencolor.r == 0 && currencolor.g == 0)
            {
                currencolor = GREEN;
            }
            else if(currencolor.g == 255 && currencolor.b == 0 &&  currencolor.r ==0)
            {
                currencolor = RED;
            }
            timepassed =0.0f;
        }

        BeginDrawing();
        ClearBackground(currencolor);
        if(IsKeyDown(KEY_UP))
        {
            bally-=1;
        }
        else if(IsKeyDown(KEY_DOWN))
        {
            bally +=1;
        }
        else if(IsKeyDown(KEY_LEFT))
        {
            ballx-=1;
        }
        else if(IsKeyDown(KEY_RIGHT))
        {
            ballx +=1;
        }
        DrawText("HELLO",200,200,56,RED);
        DrawTextEx(newfont,"Hello Agine",{10,10},20,1,BLACK);
        DrawCircle(ballx,bally,20,WHITE);
        DrawCircle(ballx-55,bally-55,20,WHITE);

        

        EndDrawing();

    }

    UnloadFont(newfont);
    CloseWindow();

}