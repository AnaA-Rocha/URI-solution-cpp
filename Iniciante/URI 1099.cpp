#include <iostream>
using namespace std;
int main ()
{
	int n,x,y,soma,c,b,a;
	cin>>n;
	for(c=1;c<=n;c++)
	{
		cin>>x>>y;
		if(x>y)
		{
			b=x;
			x=y;
			y=b;
		}
		soma=0;
		for(a=x+1;a<y;a++)
			if(a%2==1 || a%2==-1)
				soma+=a;
		cout<<soma<<endl;
	}
}
