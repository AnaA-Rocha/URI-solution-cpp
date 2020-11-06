#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int n,c,a,t;
	cin>>n;
	for(c=1;c<=n;c++)
	{
		cin>>a;
		if(a==2015)
		{
			t=2015-a+1;
			cout<<t<<" A.C."<<endl;
		}
		else
		{
			if(a<2015) 
			{
				t=2015-a;
				cout<<t<<" D.C."<<endl;
			}
			else
			{
				t=a-2015+1;
				cout<<t<<" A.C."<<endl;
			}
			
		}
	}
}
