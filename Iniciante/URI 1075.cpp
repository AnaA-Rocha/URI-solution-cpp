#include <iostream>
using namespace std;
int main()
{
	int n,c;
	cin>>n;
	for(c=1;c<10000;c++)
	{
		if(c%n==2)
			cout<<c<<endl;
	}
    return 0;
}
