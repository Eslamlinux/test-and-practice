#include "raylib.h"

int main(void)
{
    // Screen dimensions
    const int screenWidth = 800;
    const int screenHeight = 600;

    // Initialize the window and OpenGL context
    // The window title is "Raylib Primitive Shapes"
    // The screen dimensions are 800x600 pixels
    InitWindow(screenWidth, screenHeight, "Raylib Primitive Shapes");

    // Set the target frames-per-second (FPS) to 60
    SetTargetFPS(60);

    // Main game loop
    // This loop continues as long as the window is not requested to close
    while (!WindowShouldClose())
    {
        // Begin drawing phase
        // Everything drawn between BeginDrawing() and EndDrawing() will be rendered
        BeginDrawing();

        // Clear the background to a light grey color
        // This function ensures the screen is refreshed with a clean slate each frame
        ClearBackground(BLUE);

        // --- Drawing Rectangles ---

        // Draw a filled red rectangle at (50, 50) with width 100, height 80
        DrawRectangle(50, 50, 100, 80, RED);

        // Draw a blue rectangle outline at (60, 60) with width 80, height 60, and 2 pixel thickness
        DrawRectangleLines(60, 60, 80,30,RED);

        // Draw a filled green rectangle using a Rectangle struct
        Rectangle rectExample = { 200, 50, 120, 90 };
        DrawRectangleRec(rectExample, GREEN);

        // Draw a purple rectangle outline using a Rectangle struct and 3 pixel thickness
        Rectangle rectOutlineEx = { 210, 60, 100, 70 };
        DrawRectangleLinesEx(rectOutlineEx, 3, PURPLE);

        // --- Drawing Circles ---

        // Draw a filled yellow circle centered at (150, 200) with radius 40
        DrawCircle(150, 200, 40, YELLOW);

        // Draw an orange circle outline centered at (160, 210) with radius 30
        DrawCircleLines(160, 210, 30, ORANGE);

        // Draw a filled magenta circle using Vector2 for center
        DrawCircleV((Vector2){300, 200}, 50, MAGENTA);

        // --- Drawing Lines ---

        // Draw a simple white line from (50, 300) to (200, 350)
        DrawLine(50, 300, 200, 350, WHITE);

        // Draw a thicker cyan line from (250, 300) to (400, 350) with 4 pixel thickness
        DrawLineEx((Vector2){250, 300}, (Vector2){400, 350}, 4, RED);

        // Draw a line strip (a simple triangle)
        Vector2 trianglePoints[3] = {
            {50, 450},
            {150, 450},
            {100, 380}
        };
        DrawLineStrip(trianglePoints, 3, GOLD);
        // Draw a line to close the triangle if desired
        DrawLineEx(trianglePoints[2], trianglePoints[0], 2, GOLD);


        // End drawing phase
        // This command flushes all the drawing commands to the screen
        EndDrawing();
    }

    // Close window and unload OpenGL context
    // This function cleans up all resources allocated by Raylib
    CloseWindow();

    return 0;
}