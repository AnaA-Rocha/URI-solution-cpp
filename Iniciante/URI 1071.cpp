#include <iostream>
using namespace std;
int main()
{
	int x,y,a,n,soma,b;
	cin>>x>>y;
	if(x<y)
	{
		b=x;
		x=y;
		y=b;
	}
	soma=0;
	for(a=y+1;a<x;a++)
	if(a%2==1 || a%2==-1)
	soma+=a;
	cout<<soma<<endl;
	return 0;
}
