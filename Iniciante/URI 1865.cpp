#include <iostream>
using namespace std;
int main ()
{
	string nome;
	int n,f;
	scanf("%i", &n);
	for(int i=1;i<=n;i++)
	{
		cin>>nome;
		scanf("%i", &f);
		if(nome=="Thor")
		{
			printf("%c\n", 'Y');
		}
		else
		{
			printf("%c\n", 'N');
		}
	}
}
