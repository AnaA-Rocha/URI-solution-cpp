#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
	int c,a;
	double s=0;
	for(c=1,a=1;c<=39,a<=442368;c=c+2,a=a+a)
	{
		s+=(double)c/(double)a;
	}
	cout<<fixed<<setprecision(2)<<s<<endl;
}
