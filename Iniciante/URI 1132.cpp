#include <iostream>
using namespace std;
int main ()
{
	int x,y,c,a,soma2;
	soma2=0;
	cin>>x>>y;
	if(y<x)
	{
		c=y;
		y=x;
		x=c;
	}
	for(a=x;a<=y;a++)
	{
		if(a%13!=0)
		soma2+=a;
	}
	cout<<soma2<<endl;
	
}
