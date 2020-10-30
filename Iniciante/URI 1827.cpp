#include <iostream>
using namespace std;
int main ()
{
	int a;
	while(scanf(" %d",&a) != EOF)
	{
		int M[a][a];
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<a;j++)
			{
				M[i][j]=0;
			}
		}
		for(int i=0;i<a;i++)
		{
			M[i][i]=2;
		}
		//cout<<M[0][0]<<" "<<M[1][1]<<" "<<M[2][2]<<endl<<endl;
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<a;j++)
			{
				if(i+j+1==a)
					M[i][j]=3;
			}
		}
		int um=a/3;
		for(int i=um;i<a-um;i++)
		{
			for(int j=um;j<a-um;j++)
			{
				M[i][j]=1;
			}
		}	
		if(a%2)
		{
			M[a/2][a/2]=4;
		}
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<a;j++)
			{
				cout<<M[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
	}
}
