#include <graphics.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    setcolor(YELLOW);
    fillellipse(300, 240, 90, 50);

    setcolor(YELLOW);
    line(380, 240, 450, 180);
    line(450, 180, 450, 300);
    line(450, 300, 380, 240);

    setcolor(YELLOW);
    line(280, 190, 310, 150);
    line(310, 150, 330, 195);

    line(290, 288, 310, 320);
    line(310, 320, 330, 286);

    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(250, 225, 6, 6);



   


    getch();
    closegraph();
}