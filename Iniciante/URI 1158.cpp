#include<iostream>
using namespace std;
int main ()
{
	int n,c,x,y,soma=0,a;
	cin>>n;
	for(c=1;c<=n;c++)
	{
		soma=0;
		cin>>x>>y;
		if(x%2==0)
		{
			x++;
			soma+=x;
		}
		else
		{
			soma+=x;
		}
		for(a=1;a<y;a++)
		{
			x=x+2;
			soma+=x;
		}
		cout<<soma<<endl;
	}
}
