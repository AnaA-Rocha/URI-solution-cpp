#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
	int a,c,v[100];
	double z,n;
	cin>>n;
	z=n*2;
	for(c=0;c<100;c++)
	{
		z/=2;
		cout.precision(4);
		cout<<"N["<<c<<"] = "<<fixed<<z<<endl;
	}
	
}
