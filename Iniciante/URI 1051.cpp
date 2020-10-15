#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	float a,b,c,d,e,f,g,h;
	cin>>a;
	cout<<fixed<<setprecision(2);
	if(a<=2000)
		cout<<"Isento"<<endl;
	if(a>=2000.01 && a<=3000)
		{
			b=a-2000;
			c=b*0.08;
			cout<<"R$ "<<c<<endl;	
		}
	if(a>=3000.01 && a<=4500)
		{
			b=a-3000;
			c=b*0.18;
			d=a-b-2000;
			e=d*0.08;
			f=c+e;
			cout<<"R$ "<<f<<endl;
		}
	if(a>4500) 
		{
			b=a-4500;
			c=b*0.28;
			d=a-b-3000;
			e=d*0.18;
			f=a-d-b-2000;
			g=f*0.08;
			h=c+e+g;
			cout<<"R$ "<<h<<endl;
		}
return 0;
}
