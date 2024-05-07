#include<bits/stdc++.h>
using namespace std;

class Circle{
	private :	int centerX, centerY;
				int Radius=0;
				int circumference,area;
	
	public : 
		void circle()
		{
			centerX=0;
			centerY=0;
			Radius=10;
		}
		
		void circle(int cx, int cy)
		{
			centerX=cx;
			centerY=cy;
			Radius=40;
		}
		
		void circle(int cx, int cy, int r)
		{
			centerX=cx;
			centerY=cy;
			Radius=r;
		} 
		
		CalArea()
		{
			area=3.1415*Radius*Radius;
			cout<<"Area Of Circle Is : "<<area<<endl;
		}
		
		CalCircumference()
		{
			circumference = 2*3.1415*Radius;
			cout<<"Circumference Of Circle Is : "<<circumference<<endl;
		}
};

int main()
{
	Circle c1;
	c1.circle();
	c1.CalArea();
	c1.CalCircumference();
	Circle c2;
	c2.circle(2,3);
	c2.CalArea();
	c2.CalCircumference();
	Circle c3;
	c3.circle(4,3,2);
	c3.CalArea();
	c3.CalCircumference();
}
