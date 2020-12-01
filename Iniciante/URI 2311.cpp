#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
int main()
{
	string nome;
	int n,c,a;
	float d,maior,menor,t,h[7],aux,soma;
	cin>>n;
	for(c=1;c<=n;c++)
	{
		

		cin>>nome;
		cin>>d;
		for(a=0;a<=6;a++)
		{
			
			cin>>h[a];
			maior=h[0];
			menor=h[0];
			soma=0;
		}
		for(a=0;a<=6;a++)
		{
			soma+=h[a];
			
		}
		for(a=0;a<=6;a++)
		{
			if(h[a]>maior)
			{
				maior=h[a];
			}
			else
			{
				if(h[a]<menor)
				{
					menor=h[a];
				}
			}	
		}
		t=(soma-maior-menor)*d;
		cout<<nome<<" "<<fixed<<setprecision(2)<<t<<endl;
	}
}
