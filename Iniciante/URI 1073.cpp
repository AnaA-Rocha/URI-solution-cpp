#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int n,c,a;
	a=0;
	cin>>n;
	for(c=1;c<=n;c++)
	{
		if(c%2==0)
		{
			
			a=pow(c,2);
			cout<<c<<"^2 = "<<a<<endl;
		}
	}
	return 0;
}
