#include "color.h"


std::vector<Color> GetCellColor()
{
    /*{ يتكون من 4 خانات كل خانة احمر اخضر ازرق والاخيرة التركيز لكل لون , كالاتي
        اللون
        تدرج اللون
        تدرج الون
        التركيز}
    */

    Color Blue = {0, 0, 255};
    Color Yello = {255, 251, 255,0};
    Color White = {255, 255,0, 255};
    Color Red = {255,0,0,255};
    Color Black = {0, 0, 0, 255};
    Color Cyan = {0,255,255,255};
    Color Green = {0, 255,0,0};
    Color Magenta = {255,0,255,255};
    Color Gold = {215,215,0,255};
    Color Gray = {128,128,128,255};
    Color Orang = {226,116,17,255};
    Color Purple = {166,0,247,255};
    return {Blue, Green, Yello, White, Red, Black, Cyan, Magenta, Gold, Gray, Orang, Purple};    
}