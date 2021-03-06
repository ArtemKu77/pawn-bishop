#include "TXLib.h"
void drawpawn (int x, int y, int r,COLORREF color);

int main()
    {
    txCreateWindow (1200, 800);
    drawpawn(200, 500, 10,RGB (255, 255, 255));


    }

void drawpawn(int x, int y, int r,COLORREF color)
    {
    txSetColor(TX_BLACK,2);
    txSetFillColor (color);
    POINT pawn[18] = {{2 * r + x, 0 * r + y}, {4 * r + x, 0 * r + y}, {5 * r + x, 1 * r + y}, {5 * r + x, 3 * r + y},
                     {4 * r + x, 4 * r + y}, {4 * r + x, 5 * r + y}, {5 * r + x, 12 * r + y}, {6 * r + x, 12 * r + y},
                     {6 * r + x, 13 * r + y}, {0 * r + x, 13 * r + y}, {0 * r + x, 12 * r + y}, {5 * r + x, 12 * r + y},
                     {1 * r + x, 12 * r + y}, {2 * r + x, 5 * r + y}, {2 * r + x, 4 * r + y}, {1 * r + x, 3 * r + y},
                     {1 * r + x, 1 * r + y}, {2 * r + x, 0 * r + y}
        };
    txPolygon (pawn, 18);
    }
























