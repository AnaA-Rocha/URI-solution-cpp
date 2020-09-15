#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double A,B,C,t,pi,c,tr,q,r;
	cin >> A >>B >>C;
	t = (A * C) /2;
	pi = 3.14159;
	c = pi * C * C;
	tr = ((A+B)*C)/2;
	q = B*B;
	r = A*B;
	cout<<fixed<<setprecision(3);
	cout<<"TRIANGULO: "<<t<<"\nCIRCULO: "<<c<<"\nTRAPEZIO: "<<tr<<"\nQUADRADO: "<<q<<"\nRETANGULO: "<<r<<endl;
	return 0;
}
