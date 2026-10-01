#include <graphics.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");



    line(300, 100, 200, 300);
    line(200, 300, 400, 300);
    line(400, 300, 300, 100);

   

    getch();
    closegraph();
}