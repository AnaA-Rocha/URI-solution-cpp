#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	float a, b, c, p, at;
	cin>>a>>b>>c;
	cout<<fixed<<setprecision(1);
	if (a<b+c && b<a+c && c<a+b)
	{
		p=a+b+c;
		cout<<"Perimetro = "<<p<<endl;
	}
	else
	{
		at=((a+b)*c)/2;
		cout<<"Area = "<<at<<endl;
	}
	return 0;
}
