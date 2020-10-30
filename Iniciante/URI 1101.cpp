#include <iostream>
using namespace std;
int main()
{
	int M,N,c,a,sum=0;
	do
	{
		cin>>M>>N;
		if(M < N)
		{
			a=N;
			N=M;
			M=a;
		}
		sum=0;
		
		for(c=N;c<=M;c++)
		{
			if(c<=0)
			{
				break;
			}
			sum+=c;
			cout<<c<<" ";
		}
		if(c<=0)
		{
			break;
		}
		else
		{
			cout<<"Sum="<<sum<<endl;
		}
	}
	while (M!=0 && N!=0);
}
