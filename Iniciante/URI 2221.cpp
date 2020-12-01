#include <iostream>
using namespace std;
int main ()
{
	int n,a,b,a1,d1,l1,a2,d2,l2,g1,g2;
	cin>>n;
	for(a=1;a<=n;a++)
	{
			cin>>b;
			cin>>a1>>d1>>l1;
			cin>>a2>>d2>>l2;
			if(l1%2==0)
			{
					g1=1.0*(a1+d1)/2+b;
			}
			else
			{
					g1=1.0*(a1+d1)/2;
			}
			if(l2%2==0)
			{
					g2=1.0*(a2+d2)/2+b;
			}
			else
			{
					g2=1.0*(a2+d2)/2;
			}
			if(g1>g2)
			{
					cout<<"Dabriel"<<endl;
			}
			else
			{
					if(g1==g2)
					{
							cout<<"Empate"<<endl;
					}
					else
					{
							cout<<"Guarte"<<endl;
					}
			}
	}
	
}
