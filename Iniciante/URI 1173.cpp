#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x[10],c,n;
	cin>>n;
	for(c=0;c<10;c++)
	{
		x[c]=n*pow(2,c);
	}
	for(c=0;c<10;c++)
	{
		cout<<"N["<<c<<"] = "<<x[c]<<endl;
	}
	
	
}
