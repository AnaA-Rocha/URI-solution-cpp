#include<iostream>
using namespace std;
int main ()
{
	float n,m,no,c,b,a,maior;
	cin>>n;
	
	for(c=1;c<=n;c++)
	{
		cin>>m>>no;
		if(no<=10.0 && no>=8.0 && no>maior)
		{
			maior=no;
			a=no;
			b=m;
		}
	}
	if(a>=8.0 && a<=10.0)
		cout<<b<<endl;
	else
		cout<<"Minimum note not reached"<<endl;
return 0;	
		
}
