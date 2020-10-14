#include <iostream>
#include<iomanip>
using namespace std;
int main ()
{
	float n1,n2,n3,n4,m,n,mn;
	cin>>n1>>n2>>n3>>n4;
	m=(n1*2+n2*3+n3*4+n4*1)/10;
	cout<<fixed<<setprecision(1);
	cout<<"Media: "<<m<<endl;
	if (m>=7.0)
		{
			cout<<"Aluno aprovado."<<endl;	
			return 0;
		}
	else
		if(m<5.0)
			{
				cout<<"Aluno reprovado."<<endl;
				return 0;		
			}
		else
			if(5.0<=m && 6.9>=m)
				{
				cout<<"Aluno em exame."<<endl;
				cin>>n;
				cout<<"Nota do exame: "<<n<<endl;	
				mn=(n+m)/2;
				}
		
				if(5.0<=mn)
					cout<<"Aluno aprovado."<<endl;
					cout<<"Media final: "<<mn<<endl;
				if(4.9>=mn)
				{
					cout<<"Aluno reprovado."<<endl;
					cout<<"Media final: "<<mn<<endl;	
				}
	return 0;
}
