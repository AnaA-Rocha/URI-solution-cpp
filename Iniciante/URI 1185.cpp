#include <iostream>
using namespace std;
int main ()
{
	float M[12][12];
	int l,c;
	char s;
	float soma=0,media=0.0;
	cin>>s;
	for(l=0;l<12;l++)
	{
		for(c=0;c<12;c++)
		{
			cin>>M[l][c];
		}
	}
	for(l=0;l<12;l++)
	{
		
		for(c=0;c<11-l;c++)
		{
			soma+=M[l][c];
			media=soma/66.0;
		}
	}
	if(s=='S')
	{
		cout.precision(1);
		cout<<fixed<<(soma*10.0)/10<<endl;
	}
	else
	{
		cout.precision(1);
		cout<<fixed<<media<<endl;
	}
}
