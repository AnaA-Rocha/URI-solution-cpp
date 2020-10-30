#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	int x,y,n,c;
	bool a;
	cin>>n;
	for(c=1;c<=n;c++)
	{
		cin>>x>>y;
		if(y==0)
			a=true;
		else
		{
			a=false;
		}	
			if(a==true)
			cout<<"divisao impossivel"<<endl;
		else
		{
			cout<<fixed<<setprecision(1);
			cout<<(float)x/(float)y<<endl;
		}
	}

}
