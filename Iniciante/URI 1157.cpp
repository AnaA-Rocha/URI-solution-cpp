#include <iostream>
using namespace std;
int main ()
{
	int c,n,div;
	cin>>n;
	for(c=n;c>=1;c--)
	{
		if(n%c==0)
			cout<<n/c<<endl;
	}
}
