#include<iostream>
using namespace std;
int main ()
{
	int n,c,a,i,z,soma=0;
	cin>>n;
	for(c=1;c<=n;c++)
	{
		cin>>z;
		for(a=1;a<=z;a++)
		{
			if(z%a==0)
			{
				soma+=a;
			}
		//	cout<<"soma="<<soma<<endl;
		}
		if(soma-z==z)
			{
				cout<<z<<" eh perfeito"<<endl;
			}
			else
			{
				cout<<z<<" nao eh perfeito"<<endl;
			}
		soma=0;
	}
}
