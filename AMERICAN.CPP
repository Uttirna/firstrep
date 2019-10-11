#include<iostream.h>
#include<conio.h>
void main()
{
	int r, c;
	clrscr();
	for(r=0; r<=7; r++)
	{
		for(c=0; c<=24; c++)
		{      if(r>0 && r<=4 && c>0 && c<=7)
			cout<<"* ";
			if(r>0 && r<=4 && c>7 && c<17)
			cout<<"= ";
			if(r>4 && c>7 && c<24)
			cout<<"= ";
		}
		cout<<endl;
	}
	getch();

}