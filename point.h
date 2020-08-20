#include <iostream>
using namespace std;
class point
{
	private:
		double x;
		double y;
		
	public:
		point();
		point CORD();
		
		
		double inx(double a);
		double iny(double a);
		double outx();
		double outy();
		void   display();
		double incrementx();
		double incrementy();
		double decrementx();
		double decrementy();
		void points();
		
		point penemy(int &z);
		bool friendly(point z);
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	point operator+(point a);	
	point operator-(point a);
	point operator/(point a);
	point operator*(point a);
	bool operator>(point a);
	bool operator<(point a);	
	bool operator==(point a);

	friend &operator<<( ostream &output, const point &R );
};
