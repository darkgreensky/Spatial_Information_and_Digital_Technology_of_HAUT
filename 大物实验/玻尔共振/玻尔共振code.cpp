#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
const double PI = 3.1415926;
int main()
{
	double t1,t2,b; 
	double w,wr;
	cout<<"�����:";
	cin>>b;
	cout<<"what answer do you want to calculate?"<<endl<<"1.w/wr\n2.wr"<<endl;
	int t;
	cin>>t;
	if(t==1) 
	while(1)
	{
		cout<<"����(T��):";
		cin>>t1;
		cout<<"����(T����):";
		cin>>t2;
		w=2*PI/t1;
		wr=sqrt( pow(2*PI/t2,2) - 2*b*b );
		cout<<"w/wr="<<fixed<<setprecision(4)<<w/wr<<endl;
	}
	else
	{
		cout<<"����(T����):";
		cin>>t2;
		wr=sqrt( pow(2*PI/t2,2) - 2*b*b );
		cout<<"wr="<<wr<<endl;
	}
	system("pause");
}
