#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Person{
	public: string Name;
			string Mobile_No;
			string Email_id;
};

class Student : private Person{
	public: string Roll_no;
	public:
		void get_data()
		{
			cout<<"Enter Student Name : "<<endl;
			cin>>Name;
			cout<<"Enter Student Roll_No : "<<endl;
			cin>>Roll_no;
			cout<<"Enter Student Moblie Number : "<<endl;
			cin>>Mobile_No;
			cout<<"Enter Student EMail_Id : "<<endl;
			cin>>Email_id;
		}
		void Display()
		{
			cout<<endl;
			cout<<"*******************Student Information Is***********************"<<endl;
			cout<<Name<<setw(15)<<Roll_no<<setw(15)<<Mobile_No<<setw(15)<<Email_id<<endl;
		}
};

class Faculty : private Person{
	public: int Employee_Id;
			string Subject;
			int Salary;
	public:
		void get_data()
		{
			cout<<"Enter Faculty Name : "<<endl;
			cin>>Name; 
			cout<<"Enter Faculty Employee_Id : "<<endl;
			cin>>Employee_Id;
			cout<<"Enter Faculty Subject Name : "<<endl;
			cin>>Subject;
			cout<<"Enter Faculty Salary : "<<endl;
			cin>>Salary;
			cout<<"Enter Faculty Moblie Number : "<<endl;
			cin>>Mobile_No;
			cout<<"Enter Faculty EMail_Id : "<<endl;
			cin>>Email_id;
		}
		void Display()
		{
			cout<<endl;
			cout<<"*******************Faculty Information Is***************************"<<endl;
			cout<<Name<<setw(15)<<Employee_Id<<setw(15)<<Subject<<setw(15)<<Salary<<setw(15)<<Mobile_No<<setw(15)<<Email_id<<endl;
		}
};

int main()
{
	Student S;
	S.get_data();
	S.Display();
	
	Faculty F;
	F.get_data();
	F.Display();
}
