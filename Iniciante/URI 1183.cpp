#include<iostream>
using namespace std;
int main ()
{
	double M[12][12];
	int l,c;
	float soma=0;
	char s;
	cin>>s;
	for(l=0;l<12;l++)
	{
		for(c=0;c<12;c++)
		{
			cin>>M[l][c];
			if(c>l)
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
