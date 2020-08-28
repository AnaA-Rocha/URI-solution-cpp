#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float c1,c2,n1,n2,v1,v2,t;
	cin >>c1>>n1>>fixed>>setprecision(2)>> v1;
	cin >>c2>>n2>>fixed>>setprecision(2)>> v2;
	t = n1*v1 + n2 * v2;
	cout <<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<t<<endl;
	return 0;	
}

