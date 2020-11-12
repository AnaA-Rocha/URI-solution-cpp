#include <iostream>
using namespace std;
int main ()
{
	double v,d,h,a;
	while(cin>>v>>d)
	{
			h=v/(3.14*(d/2)*(d/2));
			a=3.14*(d/2)*(d/2);
			cout.precision(2);
			cout<<fixed<<"ALTURA = "<<h<<endl;
			cout<<fixed<<"AREA = "<<a<<endl;
	}
}
