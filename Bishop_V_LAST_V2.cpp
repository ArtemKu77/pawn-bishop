#include "TXLib.h"
void drawelephant (int x, int y, int r, COLORREF color);   //координаты(начало снизу);размер;цвет
int main()
    {
    txCreateWindow (1200, 800);
    drawelephant (200, 500,10, RGB (255, 255, 255));
    }
void drawelephant (int x, int y, int r, COLORREF color)      ///@autor Артём
    {
    txSetColor (TX_WHITE, 0.5);
    txSetFillColor (color);
    txEllipse (x + 1 * r, y - 7.4 * r, x + 3.9 * r,  y - 6.4 * r); //3 овал сверху
    txEllipse (x + 1 * r, y - 10.15 * r, x + 3.9 * r,  y - 7.15 * r); //2 овал сверху
    txEllipse (x + 2 * r, y - 10.65 * r, x + 2.9 * r,  y - 10.1 * r); //1 овал сверху

               POINT body[4] = {{(1.9*r)+x, (-7*r)+y}, {(2.9*r)+x, (-7*r)+y}, {(4.9*r)+x, (3*r)+y}, {(-0.1*r)+x, (3*r)+y}}; //неизменяемое тело
    txPolygon (body, 4);

    POINT stand1[4] = {{(-1.1*r)+x, (3*r)+y}, {(5.9*r)+x, (3*r)+y}, {(5.9*r)+x, (4*r)+y}, {(-1.1*r)+x, (4*r)+y}}; //первая подставка для всех, а у пешек только она
    txPolygon (stand1, 4);

    POINT stand2[4] = {{(-2.1*r)+x, (4*r)+y}, {(6.9*r)+x, (4*r)+y}, {(6.9*r)+x, (5*r)+y}, {(-2.1*r)+x, (5*r)+y}}; //вторая подставка для средних(ладья,слон,конь) и лучших
    txPolygon (stand2, 4);
    txSetColor (TX_BLACK, 0.085 * r);
    txLine (x + 3.1 * r, y - 10 * r, x + 2.4 * r, y - 8.8 * r);
    txLine (x + 2.4 * r, y - 8.8 * r, x + 2.7 * r, y - 8.65 * r);
    txLine (x + 2.7 * r, y - 8.65 * r, x + 3.359 * r, y - 9.8 * r);

    }
