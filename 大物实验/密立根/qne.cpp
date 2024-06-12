#include<iostream>
#include<cmath>
using namespace std;
const double e0 = 1.6;
double sum1 = 0, sum2 = 0;
int main()
{
	double u, tf, v, tr;
	double q1, q2;
	double res,ans;
	double e;
	int n;
	for (int i = 1; i <= 25; i++)
	{
		q1 = q2 = 102180;
		cout << "Case:" << i << endl;
		cout << "输入平衡电压 提升电压 下落时间 上升时间"<<endl;
		cin >> u >> v >> tf >> tr;
		res = sqrt(tf) * 0.0219 + 1;
		res *= tf;
		res = pow(res, 1.5);
		res *= u;
		q1 /= res;
		n = q1 / e0 + 0.5;
		e = q1 / n;
		cout<<"q"<<'\t'<<"n"<<'\t'<<"e"<<endl;
		cout << q1 << '\t' << n << '\t' << e << endl;
		sum1 += e;
		ans = sqrt(tf) * 0.0219 + 1;
		ans = pow(ans,1.5);
		ans *= v;
		ans *= sqrt(tf);
		q2 = q2 / (ans * tf) + q2 / (ans * tr);
		n = q2 / e0 + 0.5;
		e = q2 / n;
		cout << q2 << '\t' << n << '\t' << e << endl;
		sum2 += e;
	}
	cout<<"表一e均值"<<sum1/25<<endl;
	cout<<"表二e均值"<<sum2/25<<endl;
}
