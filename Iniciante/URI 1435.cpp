#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	int n,m,a,limite;
	scanf(" %d",&n);
	while(n)
	{
		int M[n][n];
		m=n;
		a=0;
		limite=n/2;
		while(m!=limite)
		{
			for(int i=0+a;i<m;i++)
				for(int j=0+a;j<m;j++)
					M[i][j]=1+a;
			a++;
			m--;
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(j>0)
					cout<<" ";
				cout<<right<<setw(3)<<M[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
		scanf(" %d",&n);
	}
}
