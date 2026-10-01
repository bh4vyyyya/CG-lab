#include <graphics.h>
#include <conio.h>

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");



 
    line(350, 100, 500, 100);
    line(500, 100, 500, 200);
    line(500, 200, 350, 200);
    line(350, 200, 350, 100);

    

    getch();
    closegraph();
}