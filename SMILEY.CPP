#include<graphics.h>
#include<conio.h>
void main()
{
	clrscr();
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");	//intialize graphics
	int x= getmaxx()/2;
	int y= getmaxy()/2;
	circle(x, y, 140);				
	setfillstyle(SOLID_FILL, YELLOW);		//solid color fill
	setbkcolor(2);
	circle(x, y, 140);
	setfillstyle(SOLID_FILL, YELLOW);
  floodfill(x, y, WHITE);
	setcolor(BLACK);
	rectangle(30,100,280,300);
	setcolor(GREEN);
	bar(30,50,60,70);
	setcolor(RED);
	ellipse(80,80,40,320,120,140);
	fillellipse(80,80,120,140);
	arc(x, y, 225, 315, 100);
	circle(x, y, 10);
	setfillstyle(SOLID_FILL, RED);			//solid color fill
	floodfill(x, y, BLACK);
	pieslice(40,80,90,180,150);
	sector(70,60,58,400,200,370);
	setcolor(BLUE);
	arc(x, y, 45, 80, 100);
	arc(x, y, 110, 145, 100);
	circle(275, 190, 15);
	circle(350, 190, 15);
	setfillstyle(SOLID_FILL, BLACK);		//solid color fill
	floodfill(275, 190, BLACK);
	floodfill(350, 190, BLACK);
	getch();
	closegraph();
}
