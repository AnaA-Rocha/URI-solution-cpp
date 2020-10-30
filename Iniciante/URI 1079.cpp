#include <iostream>
using namespace std;
int main ()
{
	int n,c;
	float n1,n2,n3,m;
	cin>>n;
	for(c=1;c<=n;c++)
	{
		cin>>n1>>n2>>n3;
		m=(n1*2+n2*3+n3*5)/10;
		cout.precision(1);
		cout<<fixed<<m<<endl;
	}
	return 0;
}
