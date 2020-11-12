#include <iostream>
using namespace std;
int main ()
{
	int n,a,m[10000],aux[10000],b;
	cin>>n;
		for(a=1;a<=n;a++)
		{
			cin>>m[a];
			aux[a+1]=m[a];
			if(m[a] < aux[a])
			{
				b=a;
				if(b>0)
				{
					break;
				}
				
			}
			else
			{
				b=0;
			}
		}
		cout<<b<<endl;	
}
