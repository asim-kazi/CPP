#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class person
{
 public:  string name;
          double cell_num;
          string city;
 public:
         void get_data_p()
         {
          cout<<"Enter Name Of The Person : "<<endl;
          cin>>name;
          cout<<"Enter Cell NO. Of The Person : "<<endl;
          cin>>cell_num;
          cout<<"Enter City Of The Person : "<<endl;
          cin>>city;
          
         }
          
         void dislpay_person()
         {
          cout<<"Name"<<setw(10)<<"Cell Num"<<setw(10)<<"City"<<endl;
          cout<<name<<setw(10)<<cell_num<<setw(10)<<city<<endl;
         
         }
           
};
class employee:public person
{
 public:  double id;
          string designation;
          double salary;
 public: 
          void get_data_e()
           {
            cout<<"Enter ID Of The Person : "<<endl;
            cin>>id;
            cout<<"Enter Designation Of The Person : "<<endl;
            cin>>designation;
            cout<<"Enter Salary Of The Person : "<<endl;
            cin>>salary;
           }          
          void display_ep()
          {
           
           cout<<name<<setw(10)<<cell_num<<setw(10)<<city<<setw(10)<<id<<setw(20)<<designation<<setw(20)<<salary<<endl;
           
          }
     
};
int main()
{
 employee e[2];
 for(int i=0;i<2;i++)
 {
 	
  e[i].get_data_p();
  e[i].get_data_e();
  
 }
  cout<<"Name"<<setw(10)<<"Cell Num"<<setw(10)<<"City"<<setw(10)<<"ID"<<setw(20)<<"Designation"<<setw(20)<<"Salary"<<endl;
           
           
  for(int i=0;i<2;i++)
 {
  
  e[i].display_ep();
  
 }

}
