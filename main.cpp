#include <iostream> 
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include "point.h"
using namespace std;
void gotop(point a)
{
	COORD pos={a.outx(),a.outy()};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}
void gotopoint(point a)
{
	COORD pos = {a.outx(),a.outy()};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
cout<<"    ";
}
void printpoint(point a, int z)
{
	gotop(a.CORD());
	cout<<z;
	
}






int main() 
{
	char s;
	int ob=0;
	cout<<"\t\t****************************************\n";
	cout<<"\t\t*Welcome To The Number Catching Game !!*"<<endl;
	cout<<"\t\t****************************************\n";
	while(1)
	{
		cout<<"\n\nPress ""1"" To Start The Game";
		cout<<"\nPress ""2"" To Exit Game !!\n";
		cout<<"Enter: ";
		s=getch();
		switch(s)
		{
			case '1':
			goto start;
			break;
			
			case '2':
			ob++;
			goto ad;
			break;
		}
		
		
		
	}
	ad:
	if(ob)
	{
		system("cls");
		cout<<" Follow Me on  Facebook: fb.com/NawabUsamaBhatti\n";
		cout<<" Follow Me on Instagram: ig.com/nawab_usama_bhatti\n";
		cout<<" Follow Me on Twitter: fb.com/NawabUsamaBhatii\n";
		cout<<" Visit My Blog: nawabusamabhatti.blogspot.com\n";
		return 0;
	}

	start:
	system("cls");
	int z=0;
point p,boundry,q;
point();
char a;
boundry.inx(29);
boundry.iny(29);
q.penemy(z);

gotopoint(p.CORD());


while(1)
{

	a=getch();
	switch(a)
	{
		
		case 'd':
		gotopoint(p.CORD());
		p.incrementx();
		if(p.outx()>boundry.outx())
		{
			p.inx(boundry.outx());
		}
		printpoint(p.CORD(),z);
		break;
		
		
		case 'a':
		gotopoint(p.CORD());
		p.decrementx();
		if(p.outx()<0)
		{
			p.inx(0);
		}
		printpoint(p.CORD(),z);
		break;
		
		case 'w':
		gotopoint(p.CORD());
		p.decrementy();
		if(p.outy()<0)
		{
			p.iny(0);
		}
		printpoint(p.CORD(),z);
		break;
		
		case 's':
		gotopoint(p.CORD());
		p.incrementy();
		if(p.outy()>boundry.outy())
		{
			p.iny(boundry.outy());
		}
		printpoint(p.CORD(),z);
		break;
		case 'e':
		goto ex;
	}
	p.points();
	if(q.friendly(p.CORD()))
	{
		goto ex;
	}

	
		if(q==p)
    {
	
	q.penemy(z);
	gotopoint(p.CORD());
	printpoint(p.CORD(),z);
    } 
	
	
	
	


	
}

	
	
	
	ex:
	system("cls");
	cout<<"\n\n\n\n\n ******** Game Over ******** \n\n\n\n\n";
		cout<<" Follow Me on  Facebook: fb.com/NawabUsamaBhatti\n";
		cout<<" Follow Me on Instagram: ig.com/nawab_usama_bhatti\n";
		cout<<" Follow Me on Twitter: fb.com/NawabUsamaBhatii\n";
		cout<<" Visit My Blog: nawabusamabhatti.blogspot.com\n";
		getch();
	 return 0;

	




}
