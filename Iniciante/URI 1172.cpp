#include<iostream>
using namespace std;
int main()
{
	int x[10],c;
	for(c=0;c<10;c++)
	{
		cin>>x[c];
	}
	for(c=0;c<10;c++)
	{
		if(x[c]<=0)
		{
			x[c]=1;
		}
	}
	for(c=0;c<10;c++)
	cout<<"X["<<c<<"] = "<<x[c]<<endl;
	
}
