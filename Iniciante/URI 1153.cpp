#include <iostream>
using namespace std;
int main ()
{
	int n,c,f=1;
	cin>>n;
	for(c=0;c<=(n-1);c++)
	{
		f=f*(n-c);
	}
	cout<<f<<endl;
}
