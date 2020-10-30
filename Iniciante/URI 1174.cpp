#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int c;
	float x[100];
	for(c=0;c<100;c++)
	{
		cin>>x[c];
	}
	for(c=0;c<100;c++)
	{
		if(x[c]<=10)
		{
			cout<<fixed<<setprecision(1)<<"A["<<c<<"] = "<<x[c]<<endl;
		}
	}
}
