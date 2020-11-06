#include <bits/stdc++.h>
using namespace std;
int main ()
{
	double a,b;
	scanf(" %lf %lf",&a,&b);
	b-=a;
	b/=a;
	b*=100;
	printf("%.2lf%\n",b);
}
//a=999.95
//b=1000.00
