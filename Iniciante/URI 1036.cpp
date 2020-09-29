#include <math.h>
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
	double a,b,c,delta,x1,x2;
	cin>>a>>b>>c;
	delta =b*b-4*a*c;
	if(a!=0 && delta>0)
	{
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		cout<<fixed<<setprecision(5);
		cout<<"R1 = "<<x1<<"\nR2 = "<<x2<<endl;
	}	
	else
		cout<<"Impossivel calcular"<<endl;
	return 0;
}
