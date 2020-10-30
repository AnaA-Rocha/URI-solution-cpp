#include <iostream>
using namespace std;
int main ()
{
	int a,num,menor=1000,posi;
	scanf(" %d",&a);
	for(int i=1;i<=a;i++)
	{
		scanf(" %d",&num);
		if(num<menor)
		{
			menor=num;
			posi=i;
		}
	}
	printf("%d\n",posi);
}
