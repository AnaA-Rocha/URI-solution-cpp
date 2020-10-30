#include <iostream>
using namespace std;
int main ()
{
	int t,c,total=0,pa,pb;
	float g1,g2,a,b;
	cin>>t;
	for(c=0;c<t;c++)
	{
		cin>>pa>>pb>>g1>>g2;
		
		while(pa<=pb)
		{
			a=(g1/100.0)*pa;
			b=(g2/100.0)*pb;
			pa+=a;
			pb+=b;
			total++;
			if(total>100)
			{
				pa=100000;
				pb=1;
				cout<<"Mais de 1 seculo."<<endl;
			}
		}
		if(total<=100)
		{
			cout<<total<<" anos."<<endl;
		}
		total=0;
	}
}
