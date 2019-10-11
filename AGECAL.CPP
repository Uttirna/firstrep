#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int AgeCal(int bd, int bm, int by, int cd, int cm, int cy);
int main()
{
	int bd, bm, by, cd, cm, cy;
	clrscr();
	cout<<"enter your date of birth: dd/"<<"mm/"<<"yyyy";
	cin>>bd>>bm>>by;
	cout<<"\nenter current date: dd/"<<"mm/"<<"yyyy";
	cin>>cd>>cm>>cy;
	cout<<"\nyour DOB: "<<bd<<"/"<<bm<<"/"<<by;
	cout<<"\npresent date: "<<cd<<"/"<<cm<<"/"<<cy;
	AgeCal(bd, bm, by, cd, cm, cy);
	getch();
	return 0;
}
int AgeCal(int bd, int bm, int by, int cd, int cm, int cy)
{
	int month[]= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if(bd > cd)
	{
		 if(cy%4==0 && bm==2 && cm==3)
		{
			cd= (1+ cd) + month[bm-1];
			cm= cm-1;

		}
		else
		{
		cd= cd+ month[bm-1];
		cm= cm-1;
		}
	}
	if(bm > cm)
	{
		cy= cy-1;
		cm= cm+12;
	}
	int cald= cd - bd;
	int calm= cm - bm;
	int caly= cy - by;
	cout<<"\nyour present age is: "<<caly<<" years "<<calm<<" months "<<cald<<" days ";
	return 0;
}