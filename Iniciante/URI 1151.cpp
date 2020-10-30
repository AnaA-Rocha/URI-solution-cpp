#include<iostream>
using namespace std;
int main ()
{
	int n,c,a=0,b=1,soma=0,z;
	cin>>n;
	cout<<a<<" "<<b;//<<" ";
	for(c=1;c<=n-2;c++)
	{
			soma=a+b;
			a=b;
			b=soma;
			cout<<" "<<soma;	
	}
	cout<<endl;
	
}
