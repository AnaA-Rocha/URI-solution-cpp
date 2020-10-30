#include <iostream>
using namespace std;
int main ()
{
	int n,c,d,i;
	string nome1,nome2,a,b;
	cin>>n;
	for(i=1;i<=n;i++)
	{
			cin>>nome1>>a>>nome2>>b;
			cin>>c>>d;
			if((c+d)%2==0)
			{
				if(a=="PAR")
				{
						cout<<nome1<<endl;
				}
				else
				{
					cout<<nome2<<endl;
				}
			}
			else
			{
					if(a=="IMPAR")
					{
							cout<<nome1<<endl;
					}
					else
					{
							cout<<nome2<<endl;
					}
			}
	}
	
}
