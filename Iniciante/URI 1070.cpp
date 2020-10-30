#include <iostream>
using namespace std;
int main()
{
	int n,a;
	cin>>n;
	for(a=n;a<n+12;a++)
	{
		if(a%2!=0)
		cout<<a<<endl;
	}
	return 0;
}
