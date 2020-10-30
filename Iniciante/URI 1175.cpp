#include<iostream>
using namespace std;
int main()
{
	int n[20],aux,l,c;
	for(l=0;l<=19;l++)
	{
		cin>>n[l];
	}
	for(l=0;l<=19;l++)
	{
		for(c=l+1;c<=19;c++)
		{
			aux=n[l];
			n[l]=n[c];
			n[c]=aux;
		}
	}
	for(l=0;l<=19;l++)
	{
		cout<<"N["<<l<<"] = "<<n[l]<<endl;
	}
			
}
