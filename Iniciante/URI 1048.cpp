#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float s,r,ns;
	cout<<fixed<<setprecision (2);
	cin>>s;
	if(s<=400.00 && s>=0.00)
	{
		r=s*0.15;
		ns=s+r;
		cout<<"Novo salario: "<<ns<<"\nReajuste ganho: "<<r<<"\nEm percentual: 15 %"<<endl;
	}
	else if(s<=800.00 && s>=400.01)
		{
			r=s*0.12;
			ns=s+r;
			cout<<"Novo salario: "<<ns<<"\nReajuste ganho: "<<r<<"\nEm percentual: 12 %"<<endl;
		}
		else if(s<=1200.00 &&s>=800.01)
		{
			r=s*0.1;
			ns=s+r;
			cout<<"Novo salario: "<<ns<<"\nReajuste ganho: "<<r<<"\nEm percentual: 10 %"<<endl;
		}
			else if(s<=2000.00 && s>=1200.01)
			{
				r=s*0.07;
				ns=s+r;
				cout<<"Novo salario: "<<ns<<"\nReajuste ganho: "<<r<<"\nEm percentual: 7 %"<<endl;
			}
				else
				{
					r=s*0.04;
					ns=s+r;
					cout<<"Novo salario: "<<ns<<"\nReajuste ganho: "<<r<<"\nEm percentual: 4 %"<<endl;
				}
	return 0;
}
