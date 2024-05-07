
#include<iostream>
#include<iomanip>
using namespace std;

class Complex {
	private : int Real,Imag;
	public  : 
		void GetValue();
		void operator-();
		void operator++();
		void operator++(int);
		Complex operator+(Complex Obj);
		Complex operator-(Complex Obj);
		void Display();
	};

void Complex :: GetValue()
			{
                       		cout<<"Enter Complex Numbers : "<<endl;
                       		cin>>Real>>Imag;
                	}
Complex Complex :: operator+(Complex c3)
			{
				Complex t;
				t.Real=Real+c3.Real;
				t.Imag=Imag+c3.Imag;
				return t;
			}
Complex Complex :: operator-(Complex c3) 
                        {
                                Complex t;
                                t.Real=Real-c3.Real;
                                t.Imag=Imag-c3.Imag;
                                return t;
                        }
void Complex :: Display()
		{
			cout<<Real<<" + "<<Imag<<" i "<<endl;
		}

int main()
{
	Complex c1,c2,Result1,Result2;
	c1.GetValue();
	c2.GetValue();
	cout<<"Input Value Is : "<<endl;
	c1.Display();
	c2.Display();
	Result1=c1+c2;
	cout<<"Result After Addition : "<<endl;
	Result1.Display();
	Result2=c1-c2;
	cout<<"Result After Subtraction : "<<endl;
	Result2.Display();
	return 0;
}
