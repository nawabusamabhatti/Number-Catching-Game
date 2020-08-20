#include <iostream> 
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include "point.h"
using namespace std;

int count=0, target=10, pts=0;

void gotop1(point a)
{
	COORD pos={a.outx(),a.outy()};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}
void gotopoint1(point a)
{
	COORD pos = {a.outx(),a.outy()};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
cout<<" ";
}
void printpoint1(point a, int z)
{
	gotop1(a.CORD());
	cout<<z;
	
}





point::point()
{
	x=0;
	y=0;
}

double point::inx(double a)
{
	x=a;
}
double point::iny(double a)
{
	y=a;
}

double point::outx()
{
	
	return x;
}
double point::outy()
{
	return y;
}
void   point::display()
{
	cout<<x<<" , "<<y;
}
point point::CORD()
{
	point a;
	a.x=x;
	a.y=y;
	return a;
}
double point::incrementx()
{
	return x++;
}
double point::incrementy()
{
	return y++;
}
double point::decrementx()
{
	return x--;
}
double point::decrementy()
{
	return y--;
}




point a[11];


point point::penemy(int &z)
{
	
	

if(count==0)
{
	a[1].inx(3);
	a[1].iny(10);
	printpoint1(a[1],target);
	
	a[2].inx(10);
	a[2].iny(3);
	printpoint1(a[2],0);
	
	a[3].inx(23);
	a[3].iny(20);
	printpoint1(a[3],0);
	
	a[4].inx(7);
	a[4].iny(13);
	printpoint1(a[4],0);
	
	a[5].inx(13);
	a[5].iny(27);
	printpoint1(a[5],0);
	
	a[6].inx(15);
	a[6].iny(10);
	printpoint1(a[6],0);
	
	a[7].inx(15);
	a[7].iny(23);
	printpoint1(a[7],0);
	
	a[8].inx(23);
	a[8].iny(8);
	printpoint1(a[8],0);
	
	a[9].inx(9);
	a[9].iny(12);
	printpoint1(a[9],0);
	
	a[10].inx(28);
	a[10].iny(17);
	printpoint1(a[10],0);
	x=3;
	y=10;
	count++;
	return a[0];
	
}
if(count==1)
{
	target=target+z;
	z=target;
	target=target-5;	
	a[2].inx(10);
	a[2].iny(3);
	printpoint1(a[2],target);
	
	a[3].inx(23);
	a[3].iny(20);
	printpoint1(a[3],0);
	
	a[4].inx(7);
	a[4].iny(13);
	printpoint1(a[4],0);
	
	a[5].inx(13);
	a[5].iny(27);
	printpoint1(a[5],0);
	
	a[6].inx(15);
	a[6].iny(10);
	printpoint1(a[6],0);
	
	a[7].inx(15);
	a[7].iny(23);
	printpoint1(a[7],0);
	
	a[8].inx(23);
	a[8].iny(8);
	printpoint1(a[8],0);
	
	a[9].inx(9);
	a[9].iny(12);
	printpoint1(a[9],0);
	
	a[10].inx(28);
	a[10].iny(17);
	printpoint1(a[10],0);
	x=10;
	y=3;
	count++;
	return a[0];


}
if(count==2)
{
	target=target+z;
	z=target;
	target=target+5;
	a[3].inx(23);
	a[3].iny(20);
	printpoint1(a[3],target);
	
	a[4].inx(7);
	a[4].iny(13);
	printpoint1(a[4],0);
	
	a[5].inx(13);
	a[5].iny(27);
	printpoint1(a[5],0);
	
	a[6].inx(15);
	a[6].iny(10);
	printpoint1(a[6],0);
	
	a[7].inx(15);
	a[7].iny(23);
	printpoint1(a[7],0);
	
	a[8].inx(23);
	a[8].iny(8);
	printpoint1(a[8],0);
	
	a[9].inx(9);
	a[9].iny(12);
	printpoint1(a[9],0);
	
	a[10].inx(28);
	a[10].iny(17);
	printpoint1(a[10],0);
	x=23;
	y=20;
	count++;
	return a[0];


}
if(count==3)
{
	target=target+z;
	z=target;
	target=target/5;
	
	a[4].inx(7);
	a[4].iny(13);
	printpoint1(a[4],target);
	
	a[5].inx(13);
	a[5].iny(27);
	printpoint1(a[5],0);
	
	a[6].inx(15);
	a[6].iny(10);
	printpoint1(a[6],0);
	
	a[7].inx(15);
	a[7].iny(23);
	printpoint1(a[7],0);
	
	a[8].inx(23);
	a[8].iny(8);
	printpoint1(a[8],0);
	
	a[9].inx(9);
	a[9].iny(12);
	printpoint1(a[9],0);
	
	a[10].inx(28);
	a[10].iny(17);
	printpoint1(a[10],0);
	x=7;
	y=13;
	count++;
	return a[0];


}
if(count==4)
{
	target=target+z;
	z=target;

	a[5].inx(13);
	a[5].iny(27);
	printpoint1(a[5],target);
	
	a[6].inx(15);
	a[6].iny(10);
	printpoint1(a[6],0);
	
	a[7].inx(15);
	a[7].iny(23);
	printpoint1(a[7],0);
	
	a[8].inx(23);
	a[8].iny(8);
	printpoint1(a[8],0);
	
	a[9].inx(9);
	a[9].iny(12);
	printpoint1(a[9],0);
	
	a[10].inx(28);
	a[10].iny(17);
	printpoint1(a[10],0);
	x=13;
	y=27;
	count++;
	return a[0];


}
if(count==5)
{
	target=target+z;
	z=target;
	
	
	a[6].inx(15);
	a[6].iny(10);
	printpoint1(a[6],target);
	
	a[7].inx(15);
	a[7].iny(23);
	printpoint1(a[7],0);
	
	a[8].inx(23);
	a[8].iny(8);
	printpoint1(a[8],0);
	
	a[9].inx(9);
	a[9].iny(12);
	printpoint1(a[9],0);
	
	a[10].inx(28);
	a[10].iny(17);
	printpoint1(a[10],0);
	x=15;
	y=10;
	count++;
	return a[0];


}
if(count==6)
{
	target=target+z;
	z=target;
	target=target/5;
	
	a[7].inx(15);
	a[7].iny(23);
	printpoint1(a[7],target);
	
	a[8].inx(23);
	a[8].iny(8);
	printpoint1(a[8],0);
	
	a[9].inx(9);
	a[9].iny(12);
	printpoint1(a[9],0);
	
	a[10].inx(28);
	a[10].iny(17);
	printpoint1(a[10],0);
	x=15;
	y=23;
	count++;
	return a[0];


}
if(count==7)
{
	target=target+z;
	z=target;
	target=target-150;
	
	a[8].inx(23);
	a[8].iny(8);
	printpoint1(a[8],target);
	
	a[9].inx(9);
	a[9].iny(12);
	printpoint1(a[9],0);
	
	a[10].inx(28);
	a[10].iny(17);
	printpoint1(a[10],0);
	x=23;
	y=8;
	count++;
	return a[0];


}
if(count==8)
{
	target=target+z;
	z=target;
	target=target%5;
	a[9].inx(9);
	a[9].iny(12);
	printpoint1(a[9],target);
	
	a[10].inx(28);
	a[10].iny(17);
	printpoint1(a[10],0);
	x=9;
	y=12;
	count++;
	return a[0];


}
if(count==9)
{
	target=target+z;
	z=target;
	target=target-154;
	a[10].inx(28);
	a[10].iny(17);
	printpoint1(a[10],target);
	x=28;
	y=17;
	count++;
	return a[0];


}
if(count==10)
{
	target=target+z;
	z=target;
	printpoint1(a[10],target);
	count++;
	return a[0];


}

}


bool point::friendly(point z)
{


while(count==1) //1 will not exlcuded 
{
	for(int i=2; i<=10; i++)
	{
		if(z==a[i])
		return 1;
	}
	return 0;
	
}
while(count==2) //2 will not exlcuded 
{
	for(int i=3; i<=10; i++)
	{
		if(z==a[i])
		return 1;
	}
	return 0;
	
}
while(count==3) //3 will not exlcuded 
{
	for(int i=4; i<=10; i++)
	{
		if(z==a[i])
		return 1;
	}
	return 0;
	
}
while(count==4) //4 will not exlcuded 
{
	for(int i=5; i<=10; i++)
	{
		if(z==a[i])
		return 1;
	}
	return 0;
	
}
while(count==5) //5 will not exlcuded 
{
	for(int i=6; i<=10; i++)
	{
		if(z==a[i])
		return 1;
	}
	return 0;
	
}
while(count==6) //6 will not exlcuded 
{
	for(int i=7; i<=10; i++)
	{
		if(z==a[i])
		return 1;
	}
	return 0;
	
}
while(count==7) //7 will not exlcuded 
{
	for(int i=8; i<=10; i++)
	{
		if(z==a[i])
		return 1;
	}
	return 0;
	
}
while(count==8) //8 will not exlcuded 
{
	for(int i=9; i<=10; i++)
	{
		if(z==a[i])
		return 1;
	}
	return 0;
	
}
while(count==9) //9 will not exlcuded 
{
	for(int i=10; i<=10; i++)
	{
		if(z==a[i])
		return 1;
	}
	return 0;
	
}
while(count==10) //10 will not exlcuded 
{
	for(int i=11; i<=11; i++)
	{
		if(z==a[i])
		return 1;
	}
	return 0;
	
}
while(count==11) //10 will not exlcuded 
{
	a[11].inx(32);
	a[11].iny(4);
	gotop1(a[11]);
	system("cls");
cout<<"\n\n\n\n\t\t\t\tYou Won The Game ";
goto end;
	
}


end:
cout<<" !! Congratulations !!\n\n\n\n\n\n\n\n";
		cout<<" Follow Me on  Facebook: fb.com/NawabUsamaBhatti\n";
		cout<<" Follow Me on Instagram: ig.com/nawab_usama_bhatti\n";
		cout<<" Follow Me on Twitter: fb.com/NawabUsamaBhatii\n";
		cout<<" Visit My Blog: nawabusamabhatti.blogspot.com\n";
		return 0;

	
}

void point::points()
{
	pts=count;
	point gg;
	gg.inx(40);
	gg.iny(3);
	gotop1(gg);
	cout<<"Score: "<<(50*pts)-50;
}















point point::operator+(point a)
	{
		point b;
		b.x=x+a.x;
		b.y=y+a.y;
		return b;
	}
point point::operator-(point a)
	{
		point b;
		b.x=x-a.x;
		b.y=y-a.y;
		return b;
	}
point point::operator/(point a)
	{
		point b;
		b.x=x/a.x;
		b.y=y/a.y;
		return b;
	}
point point::operator*(point a)
	{
		point b;
		b.x=x*a.x;
		b.y=y*a.y;
		return b;
	}
	bool point::operator>(point a)
	{
	 	 if(x>a.x&&y>a.y)
	 	{
	 	 	return 1;
		}
		else
		{
			return 0;
		}
	}
	bool point::operator<(point a)
	{
	 	 if(x<a.x&&y<a.y)
	 	{
	 	 	return 1;
		}
		else
		{
			return 0;
		}
	}
		bool point::operator==(point a)
	{
	 	 if(x==a.x&&y==a.y)
	 	{
	 	 	return 1;
		}
		else
		{
			return 0;
		}
	}



&operator<<( ostream &output, const point &R )
{
	cout<<R.x<<" "<<R.y;
}
