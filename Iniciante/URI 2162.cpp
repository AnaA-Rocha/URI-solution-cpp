#include<iostream>
using namespace std;
int main ()
{
	int n,a,h[10000],b=0;
	cin>>n;
	for(a=0;a<n;a++)
	{
		cin>>h[a];
	}
	for(a=0;a<n-1;a++)
	{
			if(n==2 && (h[0]>h[1] || h[0]<h[1]))
			{
					b=1;
			}
			else
			{
				for(a=1;a<n-1;a++)
				{
					if(n>=3 && ((h[a]>h[a+1] && h[a]>h[a-1]) || (h[a]<h[a+1] && h[a]<h[a-1])))
					{
						b=1;
					}
					else
					{
						b=0;
					}
				}
			}
	}
	if(n==1)
	{
			cout<<"1";
	}
	else
	{
		cout<<b<<endl;
	}
	
}
