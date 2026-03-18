#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "raylib.h"
#define Score_Font_Size 32
#define Board_Size 8
#define Tile_Size 42
#define Tile_Types 5
#define MAX_SCORE_POPUPS 32
#define screen_width 800
#define screen_height 650

const char tile_chars[Tile_Types] = {'#','@','$','%','&'};

char board[Board_Size][Board_Size];
bool matched[Board_Size][Board_Size] = {0};
float fall_offset[Board_Size][Board_Size] = {0};

int Score = 0;
float fall_speed = 8.0f;
float match_delay_timer = 0.0f;
const float MATCH_DELAY_DURATION = 0.2f;
Vector2 grid_origin;
Texture2D background;
Font Score_Font;
Vector2 selected_tile = {-1,-1};

float score_scale = 1.0f;
float score_scale_velocity = 0.0f;
bool score_animating = false;

Music background_music;
Sound match_sound;

typedef enum{
    STATE_IDLE,
    STATE_ANIMATING,
    STATE_MATCH_DELAY
}Tile_State;

Tile_State tile_state;


typedef struct {
	Vector2 position;
	int amount;
	float lifetime;
	float alpha;
	bool active;
} ScorePopup;
ScorePopup score_popups[MAX_SCORE_POPUPS] = { 0 };


void swap_tile(int x1,int y1, int x2, int y2)
{
    char temp = board[y1][x1];
    board[y1][x1] = board[y2][x2];
    board[y2][x2] = temp;
}
bool are_tiles_adjacent(Vector2 a,Vector2 b){
    return (abs((int)a.x - (int)b.x) + abs((int)a.y - (int)b.y)) == 1;
}


void add_score_popup(int x, int y, int amount, Vector2 grid_origin) {
	for (int i = 0; i < MAX_SCORE_POPUPS; i++) {
		if (!score_popups[i].active) {
			score_popups[i].position = (Vector2){
				grid_origin.x + x * Tile_Size + Tile_Size / 2,
				grid_origin.y + y * Tile_Size + Tile_Size / 2
			};
			score_popups[i].amount = amount;
			score_popups[i].lifetime = 1.0f;
			score_popups[i].alpha = 1.0f;
			score_popups[i].active = true;
			break;
		}
	}
}


bool find_matches()
{
    bool found =false;
    for(int y = 0; y < Board_Size; y++)
    {
        for(int x = 0; x < Board_Size; x++)
        {
            matched[y][x] = false;
        }

    }
    for(int y = 0; y < Board_Size; y++)
    {
        for(int x = 0; x < Board_Size-2; x++)
        {
            char t = board[y][x];
            if(t == board[y][x+1] &&
               t == board[y][x+2]){
                matched[y][x] = matched[y][x+1] = matched[y][x+2] = true;
                Score += 10;
                found = true;
				PlaySound(match_sound);

                score_animating =true;
                score_scale = 2.0f;
                score_scale_velocity = -2.5f;

                add_score_popup(x, y, 10, grid_origin);
            } 
        }
    }
     for(int x = 0; x < Board_Size; x++)
     {
         for(int y = 0; y < Board_Size-2; y++)
         {
             char t = board[y][x];
             if(t == board[y+1][x] &&
                t == board[y+2][x]){
                matched[y][x] = matched[y+1][x] = matched[y+2][x] = true;
                Score +=10;
                found = true;

                PlaySound(match_sound);
				score_animating = true;
				score_scale = 2.0f;
				score_scale_velocity = -2.5f;
				add_score_popup(x, y, 10, grid_origin);

             }
         }
     }

     return found;
 }

char random_tile()
{
	return tile_chars[rand() % Tile_Types];
}
void resolve_matches()
{
    for(int x =0;x < Board_Size ; x++)
    {
        int write_y = Board_Size - 1;
        for(int y =Board_Size -1;y >=0 ; y--)
        {
            if(!matched[y][x]){
                if(y !=write_y){
                board[write_y][x] = board[y][x];
                fall_offset[write_y][x] = (write_y - y) * Tile_Size;
                board[y][x] = ' ';
            }
                write_y--;
        }
    }
        while(write_y >= 0){
            board[write_y][x] = random_tile();
            fall_offset[write_y][x] = (write_y + 1) * Tile_Size;
            write_y--;
        }
    }
    tile_state = STATE_ANIMATING;    
}



void init_board()
{
	for(int y =0; y < Board_Size; y++)
	{
		for(int x =0; x < Board_Size; x++)
		{
			board[y][x] = random_tile();
		}
	}
	int grid_width = Board_Size * Tile_Size;
	int grid_height = Board_Size * Tile_Size;
	grid_origin = (Vector2)
	{
		(GetScreenWidth() - grid_width) /2 ,
		(GetScreenHeight() - grid_height) /2 ,
	};
    if(find_matches()){
        resolve_matches();
    }
    else{
        tile_state =STATE_IDLE;
    }
}

int main(void)
{

	InitWindow(screen_width, screen_height,"guss number game");
	SetTargetFPS(60);
	srand(time(NULL));

    InitAudioDevice();
    
    background = LoadTexture("assets/bg.png");
    Score_Font = LoadFontEx("assets/BoldPixelsFont.ttf",Score_Font_Size, NULL,0);
	background_music = LoadMusicStream("assets/sound.mp3");
	match_sound = LoadSound("assets/right.mp3");

	PlayMusicStream(background_music);

	SetMusicVolume(background_music, 0.60f);

	SetSoundVolume(match_sound, 0.40f);

    
    init_board();
    Vector2 mouse = {0,0};

	while(!WindowShouldClose())
	{
        UpdateMusicStream(background_music);
        
        mouse = GetMousePosition();

        if(tile_state == STATE_IDLE && IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
        {
            int x = (mouse.x - grid_origin.x) / Tile_Size;
            int y = (mouse.y - grid_origin.y) / Tile_Size;
            if(x >= 0 && x < Board_Size && y >= 0 && y < Board_Size)
            {
               Vector2 current_tile = (Vector2){x,y};
               if(selected_tile.x < 0){
                   selected_tile = current_tile;
               }
               else{
                   if(are_tiles_adjacent(selected_tile,current_tile)){
                       swap_tile(selected_tile.x,selected_tile.y, current_tile.x, current_tile.y);
                               if(find_matches()){
                               resolve_matches();
                               }
                               else{
                               swap_tile(selected_tile.x, selected_tile.y, current_tile.x, current_tile.y);
                               }
                       }
                        selected_tile = (Vector2){-1,-1};
                     }
            }
        }

        if(tile_state == STATE_ANIMATING){
            bool still_animating =false;
     
        for(int y = 0; y < Board_Size; y++)
        {
             for(int x = 0; x < Board_Size; x++)
             {
                 if(fall_offset[y][x] >0){
                     fall_offset[y][x] -= fall_speed;
                     if(fall_offset[y][x]< 0){
                         fall_offset[y][x] = 0;
                     }
                     else{
                        still_animating = true;
                     }
                 }
             }
        }
        if(!still_animating){
            tile_state = STATE_MATCH_DELAY;
            match_delay_timer = MATCH_DELAY_DURATION;
        }
        }
        if(tile_state == STATE_MATCH_DELAY){
            match_delay_timer -= GetFrameTime();
            if(match_delay_timer <= 0.0f){
                if(find_matches()){
                        resolve_matches();
                        }
                        else{
                        tile_state = STATE_IDLE;
                        }
                        }
                        }

        		for (int i = 0; i < MAX_SCORE_POPUPS; i++) {
			if (score_popups[i].active) {
				score_popups[i].lifetime -= GetFrameTime();
				score_popups[i].position.y -= 30 * GetFrameTime();
				score_popups[i].alpha = score_popups[i].lifetime;

				if (score_popups[i].lifetime <= 0.0f) {
					score_popups[i].active = false;
				}
			}
		}

		if (score_animating) {
			score_scale += score_scale_velocity * GetFrameTime();
			if (score_scale <= 1.0f) {
				score_scale = 1.0f;
				score_animating = false;
			}
		}

		BeginDrawing();
		ClearBackground(BLUE);
        
        DrawTexturePro(background,
                (Rectangle){
                0, 0, background.width, background.height
                },
                (Rectangle){
                0, 0, GetScreenWidth(),GetScreenHeight()
                },
                (Vector2) {0, 0},
                0.0f,
                WHITE
                );
        DrawRectangle(
                grid_origin.x,
                grid_origin.y,
                Board_Size* Tile_Size,
                Board_Size* Tile_Size,
                Fade(DARKGRAY, 0.7f)
                );

		for(int y =0; y < Board_Size; y++)
		{
			for(int x =0; x < Board_Size; x++)
			{
				Rectangle rect = {
					grid_origin.x + (x * Tile_Size),
					grid_origin.y + (y * Tile_Size),
					Tile_Size,
					Tile_Size
				};
				DrawRectangleLinesEx(rect, 1,DARKGRAY);
                if(board[y][x] != ' '){
				DrawTextEx(
				  GetFontDefault(),
				  TextFormat("%c", board[y][x]),
				  (Vector2) {
				  rect.x + 12, rect.y + 8 - fall_offset[y][x]
			    	}, 
				  20, 1,
                 matched[y][x]?GREEN : WHITE
				 );
                }
			}
		}

        if(selected_tile.x >= 0){
            DrawRectangleLinesEx((Rectangle){
                    grid_origin.x + (selected_tile.x *Tile_Size),
                    grid_origin.y + (selected_tile.y *Tile_Size),
                    Tile_Size, Tile_Size
                    },2,YELLOW);
        }

        DrawTextEx(
                Score_Font,
                TextFormat("SCORE: %d",Score),
                (Vector2) {40,20},
               Score_Font_Size * score_scale ,1.0f,RED
               );


				for (int i = 0; i < MAX_SCORE_POPUPS; i++) {
			if (score_popups[i].active) {
				Color c = Fade(YELLOW, score_popups[i].alpha);
				DrawText(
					TextFormat("+%d", score_popups[i].amount),
					score_popups[i].position.x,
					score_popups[i].position.y,
					20, c);
			}
		}

        EndDrawing();
	}
    UnloadTexture(background);
	StopMusicStream(background_music);
	UnloadMusicStream(background_music);
	UnloadSound(match_sound);
    UnloadFont(Score_Font);
	CloseAudioDevice();
    CloseWindow();
    return 0;
}

