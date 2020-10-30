#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float n,a,b,m;
	b=0;
	while(true)
	{
		cin>>n;
		if(n<0 || n>10)
		{
			cout<<"nota invalida"<<endl;
		}
		else
		{
			if(b==0)
			{
				a=n;//a=3.5
				b=1;
			}
			else
			{
				m=(a+n)/2;
				cout<<"media = "<<fixed<<setprecision(2)<<m<<endl;
				break;
			}
		}
	}
}
