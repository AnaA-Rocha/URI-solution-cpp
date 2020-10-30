#include <iostream>
using namespace std;
int main ()
{
	int a,c,b,x;
	x=0;
	for(c=1;c<=100;c++)
	{
		cin>>a;
		if(a>x)
		{
			x=a;
			b=c;
		}
	}
	cout<<x<<endl<<b<<endl;
}
