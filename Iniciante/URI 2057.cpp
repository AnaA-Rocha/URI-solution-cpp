#include<iostream>
using namespace std;
int main ()
{
	int s,t,f,a;
	cin>>s>>t>>f;
	a=s+t+f;
	if(a<24 && a>=0)
		cout<<a<<endl;
	else if (a==24)
			cout<<"0"<<endl;
		else if(a>24)
			cout<<a-24<<endl;
			else if(a<0)
				cout<<a+24<<endl;
	return 0;
}
