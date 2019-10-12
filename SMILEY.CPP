#include<graphics.h>
#include<conio.h>
void main()
{
	clrscr();
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	int x= getmaxx()/2;
	int y= getmaxy()/2;
	circle(x, y, 140);
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(x, y, WHITE);
	setcolor(BLACK);
	arc(x, y, 225, 315, 100);
	circle(x, y, 10);
	setfillstyle(SOLID_FILL, RED);
	floodfill(x, y, BLACK);
	arc(x, y, 45, 80, 100);
	arc(x, y, 110, 145, 100);
	circle(275, 190, 15);
	circle(350, 190, 15);
	setfillstyle(SOLID_FILL, BLACK);
	floodfill(275, 190, BLACK);
	floodfill(350, 190, BLACK);
	getch();
	closegraph();
}