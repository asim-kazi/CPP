#include<iostream>
#include<iomanip>
using namespace std;
class student
{
	public: char name[10],prn[10];
	        int roll;
	
	public:void get();   
	       void display();
	               
};

void student::get()
{
	

		cout<<"Enter Name Of Sudent : "<<endl;
		cin>>name;
		cout<<"Enter PRN Of Sudent : "<<endl;
		cin>>prn;
		cout<<"Enter Roll NO. Of Sudent : "<<endl;
		cin>>roll;
	

}
int main()
{
	student s[10];
	int i,n;
	cout<<"Enter No. Of Sudent : "<<endl;
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		s[i].get();
	}
    for(i=0;i<n;i++)
    {
    	s[i].display();
	}
	
}

void student::display()
{   
    
	cout<<"____________________________"<<endl;
	cout<<"Name\t PRN\t Roll Number"<<endl;
	cout<<name<<setw(10)<<prn<<setw(10)<<roll<<endl;
	
}
