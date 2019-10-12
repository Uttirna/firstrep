#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>

void main()
{
	clrscr();
	int gd= DETECT, gm;
	int x1, y1, x2, y2, x3, y3, i, tx, ty, r, sx, sy;
	float rad;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	printf("Enter values of x1, y1: ");
	scanf("%d %d", &x1, &y1);
	printf("Enter values of x2, y2: ");
	scanf("%d %d", &x2, &y2);
	printf("Enter values of x3, y3: ");
	scanf("%d %d", &x3, &y3);
	line(x1, y1, x2, y2);
	line(x2, y2, x3, y3);
	line(x3, y3, x1, y1);
	printf("\nEnter the operation you want: ");
	printf("\n1 for Translation\n2 for Rotation\n3 for Scaling: ");
	scanf("%d", &i);
	switch(i)
	{
	  case 1: {
		printf("\nEnter values for tx and ty: ");
		scanf("%d %d", &tx, &ty);
		x1= x1+tx;
		y1= y1+ty;
		x2= x2+tx;
		y2= y2+ty;
		x3= x3+tx;
		y3= y3+ty;
		line(x1, y1, x2, y2);
		line(x2, y2, x3, y3);
		line(x3, y3, x1, y1);
	  break;  }
	  case 2: {
		printf("\nEnter angle of rotation in degrees: ");
		scanf("%d", &r);
		rad= (r*3.14)/180;
		x1= x3*cos(rad)- y3*sin(rad);
		y1= x3*sin(rad)+ y2*cos(rad);
		x2= x1*cos(rad)- y1*sin(rad);
		y2= x1*sin(rad)+ y1*cos(rad);
		x3= x2*cos(rad)- y2*sin(rad);
		y3= x2*sin(rad)+ y2*cos(rad);
		line(x1, y1, x2, y2);
		line(x2, y2, x3, y3);
		line(x3, y3, x1, y1);

	  break;  }
	  case 3: {
		printf("\nEnter values of sx and sy: ");
		scanf("%d %d", &sx, &sy);
		x1= x1*sx;
		y2= y2*sy;
		x2= x2*sx;
		y2= y2*sy;
		x3= x3*sx;
		y3= y3*sy;
		line(x1, y1, x2, y2);
		line(x2, y2, x3, y3);
		line(x3, y3, x1, y1);
	  break;  }
	  default: printf("\nInvalid Choice!");
	}
	getch();
	closegraph();
}
