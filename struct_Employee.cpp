#include<iostream>
#include<iomanip>
using namespace std;
struct employee
{
   char name[10],id[10],num[20];
   float bs,da,hra,ts;
};
int main()
{  
   struct employee e[50];
   int i,n;
   cout<<"Enter Num Of Employee"<<endl;
   cin>>n;
   cout<<"----------Enter Employee Information---------"<<endl;
   for(i=0;i<n;i++)
   {
      cout<<"Enter Name Of Employee"<<endl;
      cin>>e[i].name;
      cout<<"Enter ID Of Employee"<<endl;
      cin>>e[i].id;
      cout<<"Enter Mobile No. Of Employee"<<endl;
      cin>>e[i].num;
      cout<<"Enter Salary Of Employee"<<endl;
      cin>>e[i].bs;
      
      
   }  
   for(i=0;i<n;i++){
   
       e[i].da=(80*e[i].bs)/100;
       e[i].hra=(20*e[i].bs)/100;
       e[i].ts=e[i].bs+e[i].da+e[i].hra;
       
       }
   cout<<"-------------Information Of Employee----------------"<<endl;
    for(i=0;i<1;i++)
    {
       cout<<"Name "<<setw(10);
      cout<<"Id "<<setw(10);
      cout<<"Mobile Number "<<setw(10);
      cout<<"Total Salary "<<endl;
     }

    
    for(i=0;i<n;i++)
   {
      cout<<e[i].name<<setw(10);
      cout<<e[i].id<<setw(10);
      cout<<e[i].num<<setw(10);
      cout<<e[i].ts<<endl;
      
   }


}

