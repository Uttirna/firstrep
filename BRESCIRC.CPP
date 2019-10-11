#include<graphics.h>
#include<conio.h>
#include<stdio.h>

void main()
{
  clrscr();
  int gd= DETECT, gm, x, y, xc, yc, rad, d, p;
  initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
  printf("Enter value of xc, yc, radius: ");
  scanf("%d %d %d", &xc, &yc, &rad);
  x=0;
  y=rad;
  d= 3-(2*rad);
   while(x<y)
   {
     x++;
	if(d< 0)
	{
	  d= d+(4*x)+6;
	}
	else
	{
	  d= d+4*(x-y)+10;
	  y--;
	}
    putpixel(xc-y, yc-x, WHITE);
    putpixel(xc+x, yc+y, WHITE);
    putpixel(xc-x, yc-y, RED);
    putpixel(xc+x, yc-y, YELLOW);
    putpixel(xc-x, yc+y, MAGENTA);
    putpixel(xc+y, yc+x, BLUE);
    putpixel(xc+y, yc-x, BROWN);
    putpixel(xc-y, yc+x, BLACK);
    putpixel(xc-y, yc-x, GREEN);
   }
  getch();
  closegraph();
}
