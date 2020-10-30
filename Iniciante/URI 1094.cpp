#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
int main ()
{
	string a;
	int n,c,q,t,tc,tr,ts;
	float pc,pr,ps;
	t=0;
	tc=0;
	tr=0;
	ts=0;
	cin>>n;
	for(c=1;c<=n;c++)
	{
		cin>>q>>a;
		t += q; 
		if(a=="C")
			tc += q;
		else if (a=="R")
			tr += q;
			else if(a=="S")
				ts += q;
	}
	cout<<"Total: "<<t<<" cobaias"<<endl<<"Total de coelhos: "<<tc<<endl<<"Total de ratos: "<<tr<<endl<<"Total de sapos: "<<ts<<endl;
	cout<<fixed<<setprecision(2);
	cout<<"Percentual de coelhos: "<<100.*tc/t<<" %"<<endl;
	cout<<"Percentual de ratos: "<<100.*tr/t<<" %"<<endl;
	cout<<"Percentual de sapos: "<<100.*ts/t<<" %"<<endl;
	return 0;
}
