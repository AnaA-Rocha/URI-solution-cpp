#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
	int c;
	double s=0;
	for(c=1;c<=100;c++)
	{
		s+=1.0/c;
	}
	cout<<fixed<<setprecision(2)<<s<<endl;
}
