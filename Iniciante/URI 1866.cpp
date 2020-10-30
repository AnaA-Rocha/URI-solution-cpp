#include <iostream>
using namespace std;
int main ()
{
	int n,c;
	scanf("%i",&c);
	for(int i=0;i<c;i++)
	{
		scanf("%i",&n);
		if(n%2==0)
		{
			printf("0\n");
		}
		else
		{
			printf("1\n");
		}
	}
}
