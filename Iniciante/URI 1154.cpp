#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	int n,a=0,contador=0;
	float m;

	do
	{
		contador++;
		cin>>n;
		if(n>=0)
		{
		
		a+=n;
		m=1.0*a/contador;
		}
		
	}
	
	while(n>=0);
	cout<<fixed<<setprecision(2)<<m<<endl;
}
