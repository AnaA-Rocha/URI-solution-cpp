#include<iostream>
using namespace std;
int main()
{
	long long int c,a,z,n,soma=0,b=0,d=1;
	cin>>n;
	for(c=1;c<=n;c++)
	{
		cin>>z;
		if(z==1)
		{
			for(a=0;a<=z-1;a++)
			{
				soma=b+d;
				b=d;
				d=soma;
			}
		}
		else
		{
			for(a=0;a<=z-2;a++) // 47 para frente dá errado pq o número é muito grande
			{
				soma=b+d;
				b=d;
				d=soma;
			}
		}
			
		cout<<fixed<<"Fib("<<z<<") = "<<soma<<endl;
		soma=0;
		b=0;
		d=1;
	}
			
}
