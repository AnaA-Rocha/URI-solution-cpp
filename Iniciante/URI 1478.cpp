#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	int n,a;
	scanf(" %d",&n);
	while(n)
	{
		int M[n][n];
		for(int l=0;l<n;l++)
		{
			a=1;
			M[l][l]=1;
			while(l+a<n)
			{
				M[l][l+a]=1+a;
				M[l+a][l]=1+a;
				a++;
			}
		}
		for(int l=0;l<n;l++)
		{
			for(int c=0;c<n;c++)
			{
				if(c>0)
					cout<<" ";
				cout<<right<<setw(3)<<M[l][c];
			}
			cout<<endl;
		}
		cout<<endl;
		scanf(" %d",&n);
	}
}
