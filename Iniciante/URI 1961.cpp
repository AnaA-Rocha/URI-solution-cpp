#include <iostream>
using namespace std;
int main ()
{
	int p,n,a,c,x=1,z;
	cin>>p>>n>>c;
	for(a=1;a<n;a++)
	{
		z=c;
		cin>>c;
		if(z-c>p || z-c<-p)
		{
			x=0;
		}
	}
	if(x==0)
	{
		cout<<"GAME OVER"<<endl;
	}
	else
	{
		cout<<"YOU WIN"<<endl;
	}
}
