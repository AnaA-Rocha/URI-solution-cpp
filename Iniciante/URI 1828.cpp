#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	int n,i;
	string a,b,c;
	cin>>n;
		for(i=1;i<=n;++i)
	{	
		cin>>a>>b;
		if((a=="tesoura" && b=="lagarto")||(a=="tesoura" && b=="papel")||(a=="papel" && b=="pedra")||(a=="papel" && b=="Spock")||(a=="Spock"&&b=="pedra"))
			c="Bazinga!";
		if((a=="pedra" && b=="lagarto")||(a=="pedra" && b=="tesoura")||(a=="lagarto" && b=="papel")||(a=="lagarto" && b=="Spock")||(a=="Spock" && b=="tesoura"))
			c="Bazinga!";	
		if((b=="tesoura" && a=="lagarto")||(b=="tesoura" && a=="papel")||(b=="papel" && a=="pedra")||(b=="papel" && a=="Spock")||(b=="Spock"&&a=="pedra"))
			c="Raj trapaceou!";
		if((b=="pedra"&&a=="lagarto")||(b=="pedra"&&a=="tesoura")||(a=="papel" && b=="lagarto")||(b=="lagarto"&&a=="Spock")||(b=="Spock"&&a=="tesoura"))
			c="Raj trapaceou!";
		if(a==b)
			c="De novo!";
		cout<<"Caso #"<<i<<": "<<c<<endl;
	}
}
