#include<iostream>
using namespace std;
int main ()
{
	long int n,c=0,aux,z1;
	cin>>n;
	long int x[n];
	for(c=0;c<n;c++)
	{
		cin>>x[c];
		aux=x[c];	
	}
	for(c=0;c<n;c++)
	{
		if(aux>x[c])
		{
			aux=x[c];
			z1=c;
		}
		if(n==1)
		{
			aux=x[c];
			z1=0;
		}
	}
	cout<<"Menor valor: "<<aux<<endl<<"Posicao: "<<z1<<endl;
}
