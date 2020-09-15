#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a,b,c,m,m2,x,y;
	cin>>a>>b>>c;
	x=abs(a-b);
	m=(a+b+x)/2;
	y=abs(m-c);
	m2=(m+c+y)/2;
	cout <<m2<<" eh o maior" <<endl;
	return 0;
}
