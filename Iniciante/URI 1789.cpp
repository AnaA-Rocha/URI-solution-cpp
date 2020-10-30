#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int a;
	while(scanf("  %d",&a) != EOF)
	{
		int v,maior=0;
		for(int i=0;i<a;i++)
		{
			scanf(" %d",&v);
			if(v>maior)
				maior=v;
			//cout<<"MAIOR= "<<maior<<" V= "<<v<<endl;
		}
		//cout<<maior<<endl;
		if(maior>=20)
			printf("3\n");
		else
			if(maior>=10)
				printf("2\n");
			else
				printf("1\n");
	}
}
