#include <iostream>
using namespace std;
int main ()
{
	int n,soma1,soma2,soma3;
	soma1=0;
	soma2=0;
	soma3=0;
	while(true)
	{
		cin>>n;
		if(n==1)
		{
			soma1++;
		}
		if(n==2)
		{
			soma2++;
		}
		if(n==3)
		{
			soma3++;
		}
		if(n==4)
		{
			break;
		}
	}
	while(false)
	{
		cin>>n;
	}
	cout<<"MUITO OBRIGADO"<<endl;
	cout<<"Alcool: "<<soma1<<endl;
	cout<<"Gasolina: "<<soma2<<endl;
	cout<<"Diesel: "<<soma3<<endl;
}
