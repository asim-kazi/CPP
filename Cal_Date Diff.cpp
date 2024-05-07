#include<iostream>
#include<iomanip>
using namespace std;
class date
{
	public: int day,month,year;
	        int day1,month1,year1;
	public:
		   void set_date()
		   {
		   	cout<<"------Enter 1st Date------"<<endl;
		   	cout<<"Enter Date : ";
		   	cin>>day;
		   	cout<<"Enter Month : ";
		   	cin>>month;
		   	cout<<"Enter Year : ";
		   	cin>>year;
		   	cout<<endl;
		   }
		   void set_data1()
		   {
		   	cout<<"------Enter 2nd Date------"<<endl;
		   	cout<<"Enter Date : ";
		   	cin>>day1;
		   	cout<<"Enter Month : ";
		   	cin>>month1;
		   	cout<<"Enter Year : ";
		   	cin>>year1;
		   	cout<<endl;
		   }
		   void display()
		   {
		   	cout<<"1st Date Is : ";
		   	cout<<day<<"-"<<month<<"-"<<year<<endl;
		   	cout<<"2nd Date Is : ";
		   	cout<<day1<<"-"<<month1<<"-"<<year1<<endl;
		   	cout<<endl;
		   }
		   void cal_day()
		   {
		   	if(day<day1)
		   	{
		   		day=day+30;
		   		day=day-day1;
		   		month--;
			}
			else
			{
				day=day-day1;
			}
		   }
		   void cal_month()
		   {
		   	if(month<month1)
		   	{
		   	    month=month+12;
				month=month-month1;
				year--;	
		    }
		    else
		    {
		    	month=month-month1;
			}
		   }
		   void cal_year()
		   {
		   		if (year<year1)
		   		{
		   			year=year1-year;	
				}
				else
				{
					year=year-year1;
				}
		   }
		   
		   void diff()
		   {
		   	cout<<endl;
		   	cout<<"Difference Between Two Dates : "<<endl;
		   	cout<<"Date : "<<day<<setw(10)<<"Month : "<<month<<setw(10)<<"Year : "<<year<<endl;
		   }
		  
		   
};

int main()
{
	date d;
	d.set_date();
	d.set_data1();
	d.display();
	d.cal_day();
	d.cal_month();
	d.cal_year();
	d.diff();
}
