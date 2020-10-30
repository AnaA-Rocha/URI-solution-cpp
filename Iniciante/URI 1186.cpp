#include <iostream>
using namespace std;
int main ()
{
	char s;
	double M[12][12];
	int c,l;
	float soma=0;
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
		for(c=0;c<12;c++)
		{
			if(l+c>=12)
			{
					soma+=M[l][c];
			}
		}
	}
	if(s=='S')
	{
		cout.precision(1);
		cout<<fixed<<soma<<endl;
	}
	else
	{
		cout.precision(1);
		cout<<fixed<<soma/66.0<<endl;
	}
}
