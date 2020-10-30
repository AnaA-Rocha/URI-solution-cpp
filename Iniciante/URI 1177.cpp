#include<iostream>
using namespace std;
int main ()
{
	int n,c=0,a,v[1000];
	cin>>n;
	for(a=0;a<1000;a++)
	{
		cout<<"N["<<a<<"] = "<<c<<endl;
		c++;
		if(c==n)
		{
			c=0;
		}
	}
}
