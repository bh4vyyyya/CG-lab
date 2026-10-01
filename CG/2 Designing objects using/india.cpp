#include <graphics.h>
#include <conio.h>


void main()
{
    int gd = DETECT, gm;
    int i;

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    setcolor(WHITE);
    line(150, 80, 150, 420);
    line(152, 80, 152, 420);

    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    rectangle(152, 80, 452, 130);
    floodfill(155, 85, RED);

    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    rectangle(152, 130, 452, 180);
    floodfill(155, 135, WHITE);

    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    rectangle(152, 180, 452, 230);
    floodfill(155, 185, GREEN);

    setcolor(BLUE);
    circle(302, 155, 25);

 

    setcolor(BROWN);
    setfillstyle(SOLID_FILL, BROWN);
    bar(120, 420, 184, 440);

    getch();
    closegraph();
}