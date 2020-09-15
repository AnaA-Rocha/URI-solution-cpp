#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
	float x1,x2,y1,y2,d,a,b;
	cin >> x1>>y1>>x2>>y2;
	a=x2-x1;
	b=y2-y1;
	cout<<fixed<<setprecision(4);
	d=sqrt(a*a+b*b);
	cout<<d<<endl;
	return 0;
}
