#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int soma1=a+b,soma2=b+c,soma3=c+d;
	int dif1=fabs(a-b),dif2=fabs(b-c),dif3=fabs(c-d);
	if(soma1>c && c>dif1 || soma1>d && d>dif1 || soma2>a && a>dif2|| soma2>d && d>dif2 || soma3>a && a>dif3 || soma3>b && b>dif3)
		cout<<"S"<<endl;
	else
		cout<<"N"<<endl;
}
//hipotenusa^2=a^2+b^
