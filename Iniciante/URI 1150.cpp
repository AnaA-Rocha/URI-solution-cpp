#include<iostream>
using namespace std;
int main ()
{
	int x,z,soma=0,c=0;
	cin>>x>>z;
	while(x>z || x==z)
	{
		cin>>z;
	}
	//cout<<"x"<<x<<"z"<<z;
	while(soma<z)
	{
		c++;
		soma+=x;
		x++;
	}
	cout<<c<<endl;
	
}
