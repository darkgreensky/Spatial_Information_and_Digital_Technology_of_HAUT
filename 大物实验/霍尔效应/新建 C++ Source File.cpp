#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
	double k=12.433;
	ifstream fin("in.txt");
	ofstream fout("out.txt");
	for(int i=1;i<=15;i++)
	{
		double vh;
		fin>>vh;
		fout<<setprecision(4)<<vh/k<<endl;
	}
}
