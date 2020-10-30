#include<iostream>
using namespace std;
int main ()
{
	int n,c,a=0,p[5],i[5],j,b=0;
	for(c=1;c<=15;c++)
	{
		cin>>n;
		{
			if(n%2==0)
			{
				p[a]=n;
				a++;
				if(a==5)
				{
					for(j=0;j<5;j++)
					{
						cout<<"par["<<j<<"] = "<<p[j]<<endl;
						a=0;	
					}
				}
			}
			else
			{
				i[b]=n;
				b++;
					if(b==5)
				{
					for(j=0;j<5;j++)
					{
						cout<<"impar["<<j<<"] = "<<i[j]<<endl;
						b=0;	
					}
				}
				
			}
		}
		if(c==15)
		{
			for(j=0;j<b;j++)
			{
				cout<<"impar["<<j<<"] = "<<i[j]<<endl;
			}
			for(j=0;j<a;j++)
			{
				
				cout<<"par["<<j<<"] = "<<p[j]<<endl;				
			}	
		}
	}
}
