#include <iostream>
using namespace std;
int main ()
{
	int n,c,out,in,a;
	cin>>n;
	in=0;
	out=0;
	for(c=1;c<=n;c++)
	{
		cin>>a;
		if(a>=10 && a<=20)
			in++;
		else
			out++;
	}
	cout<<in<<" in"<<endl<<out<<" out"<<endl;
	return 0;
}
