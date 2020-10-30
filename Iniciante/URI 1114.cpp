#include <iostream>
using namespace std;
int main ()
{
	int x;
	do
	{
		cin>>x;
		if(x==2002)
			cout<<"Acesso Permitido"<<endl;
		else
			cout<<"Senha Invalida"<<endl;
	}
	while (x!=2002);
}
