#include <iostream>
using namespace std;
int main ()
{
	double x;
	int n;
	//cin>>n;
	scanf("%i",&n);
	if(n==1)
	{
		x=1/6;
	}
	for(int i=1;i<=n;i++)
	{
		x=6+x;
		x=1.0/x;
	}
	printf("%.10lf\n", x+3);
}
