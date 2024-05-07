#include<iostream>
#include<iomanip>
using namespace std;
struct student
{
	char name[20],prn[20],email[10];
	int percentage;
};
int main()
{
	struct student s[50];
	int n;
	cout<<"Enter Num Of Sudent"<<endl;
	cin>>n;
		for(int i=0;i<n;i++)
	{
		cout<<"Enter Name Of Sudent"<<endl;
		cin>>s[i].name;
		cout<<"Enter PRN Of Sudent"<<endl;
		cin>>s[i].prn;
		cout<<"Enter Mail-ID Of Sudent"<<endl;
	    cin>>s[i].email;
		cout<<"Enter Percentage Of Sudent"<<endl;
		cin>>s[i].percentage;
	}
	cout<<endl;
	cout<<"***************************************"<<endl;
	cout<<"Student Info :"<<endl;
	cout<<"Name \t PRN \t   Email-ID \t Percentage"<<endl;
	cout<<endl;

	for(int i=0;i<n;i++)
	{
		cout<<s[i].name<<setw(10);
		cout<<s[i].prn<<setw(15);
		cout<<s[i].email<<setw(10);
		cout<<s[i].percentage<<endl;
		cout<<endl;

	}
}
