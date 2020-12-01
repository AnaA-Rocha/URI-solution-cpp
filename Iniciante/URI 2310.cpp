#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
	int n,i,sc,bc,ac,S=0,B=0,A=0,SC=0,BC=0,AC=0;
	float s,b,a;
	string nome;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>nome;
		cin>>s>>b>>a;
		cin>>sc>>bc>>ac;
		S+=s;
		B+=b;
		A+=a;
		SC+=sc;
		BC+=bc;
		AC+=ac;
	}
	s=100.0*SC/S;
	b=100.0*BC/B;
	a=100.0*AC/A;
	cout.precision(2);
	cout<<fixed<<"Pontos de Saque: "<<s<<" %."<<endl<<"Pontos de Bloqueio: "<<b<<" %."<<endl<<"Pontos de Ataque: "<<a<<" %."<<endl;
}
