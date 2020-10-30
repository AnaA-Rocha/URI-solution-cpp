#include<iostream>
using namespace std;
int main ()
{
	float M[12][12];
	int l,c,n,soma=0;
	float media;
	char s;
	cin>>n;
	cin>>s;
	for(l=0;l<=12;l++)
	{
		for(c=0;c<12;c++)
		{
			cin>>M[l][c];
		}
	}
	for(l=0;l<12;l++)
	{
		for(c=n;c<=n;c++)
		{
		    soma+=M[l][c];
		    media=soma/12.0;
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
