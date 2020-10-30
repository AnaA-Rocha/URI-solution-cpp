#include <iostream>
using namespace std;
int main ()
{
	int x,y,c,a;
	cin>>x>>y;
	for(c=1;c<=y;c++)
	{
		if(c%x==0)
			cout<<c<<endl;
		else
			cout<<c<<" ";
		
	}
}
