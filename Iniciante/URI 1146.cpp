#include <iostream>
using namespace std;
int main ()
{
	int n,c,a;
	a=0;
	cin>>n;
	while(n!=0)
	{
		
		for(c=1;c<n;c++)
		{
			cout<<c<<" ";
			
		}
		for(c=n;c<=n;c++)
			cout<<c;
		cout<<endl;
		cin>>n;
	}
}
