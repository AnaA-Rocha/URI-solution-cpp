#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double r,pi,v;
	cin >>fixed>>setprecision(2)>> r;
	pi = 3.14159;
	v = (4/3.0) * pi * r * r * r;
	cout <<fixed<<setprecision(3);
	cout << "VOLUME = "<<v<<endl;
	return 0;
}
