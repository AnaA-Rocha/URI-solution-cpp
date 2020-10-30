#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int a,b,c,x;
	cin>>a;
	while(a!=0)
	{
		cin>>b>>c;
		x=((a*b)/(1.0*c/100));
		x=sqrt(x);
		cout<<abs(x)<<endl;
		cin>>a;
	}
	
	
}
