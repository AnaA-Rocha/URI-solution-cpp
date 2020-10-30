#include <iostream>
using namespace std;
int main ()
{
	int x,c,soma,a;
	
	while(x!=0)
	{
		soma=0;
		cin>>x;
		if(x==0)
		{
			break;
		}
		if(x%2==0)
		{
			for(c=x;c<=x+8;c=c+2)
			{
				soma+=c;
			}
			cout<<soma<<endl;
		}
		else
		{
			for(a=x+1;a<=x+9;a=a+2)
			{
				soma+=a;
			}
			cout<<soma<<endl;
		}
	}
}
