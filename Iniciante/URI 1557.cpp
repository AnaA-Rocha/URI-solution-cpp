#include <bits/stdc++.h>
#include <string>
using namespace std;
int main ()
{
	int a;
	scanf(" %d",&a);
	while(a)
	{
		int auxvari,M[a][a];
		float auxfix=0.5;
		for(int i=0;i<a;i++)
		{
			auxfix*=2;
			auxvari=auxfix;
			//cout<<"auxvari= "<<auxvari<<" auxfic= "<<auxfix<<endl;
			for(int j=0;j<a;j++)//le pela linha
			{
				M[i][j]=auxvari;
				auxvari*=2;
				//cout<<"auxvari= "<<auxvari<<endl;
				//cout<<i<<"-"<<j<<endl;
			}
		}
		int x=a-1;
		string tamanho=to_string(M[x][x]);
		int tam=tamanho.size()+1;
		
		for(int i=0;i<a;i++)
		{
			int j=0;
			//cout<<"v[0] = "<<v[0];
			int z=tam-1;
			cout<<setw(z)<<M[i][j];
			for(j=1;j<a;j++)
			{
				cout<<setw(tam)<<M[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
		scanf(" %d",&a);
	}
}
