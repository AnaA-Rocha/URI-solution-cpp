#include <iostream>
using namespace std;
int main()
{
	int x,y,a,b;
	cin>>x>>y;
	if(x>y)
	{
		b=y;
		y=x;
		x=b;
	}
	for(a=x+1;a<y;a++)
	{
		if(a%5==2 || a%5==3)
		{
			cout<<a<<endl;
		}
	}
}
