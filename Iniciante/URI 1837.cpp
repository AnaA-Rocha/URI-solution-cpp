#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int a,b;
	scanf(" %d %d",&a,&b);
	int x=a/b,z=a%b;
	if(a<0 && b<0)
	{
		x=0;
		b=fabs(b);
		//cout<<"B= "<<b<<endl;
		while(a<0)
		{
			a+=b;
			x++;
		}
		z=a;
		//a=fabs(a);
		//b=fabs(b);
	}
	else
	{
		while(z<0)
		{
			z+=b;
			x-=1;
		}
	}
		cout<<x<<" "<<z<<endl;
}
