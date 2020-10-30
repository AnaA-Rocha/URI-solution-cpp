#include<iostream>
using namespace std;
int main ()
{
	int n,l,c;
	while (cin>>n)
	{
		for(l=0;l<n;l++)
		{
			for(c=0;c<n;c++)
			{
				if(c+l==n-1)
				{
					cout<<2;
				}
				else
				{
					if(c==l)
					{
						cout<<1;
					}
					else
					{
						cout<<3;
					}
					
				}
				if(c==n-1)
				{
					cout<<endl;
				}
			}
		}
	}
}
