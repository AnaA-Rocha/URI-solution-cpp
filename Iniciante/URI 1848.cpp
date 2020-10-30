#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string a;
	int soma=0,para=3;
	while(para)
	{
		cin>>a;
		if(a=="caw")
		{
			cin>>a;
			cout<<soma<<endl;
			soma=0;
			para--;
		}
		else
		{
			if(a[0]=='*')
				soma+=4;
			if(a[1]=='*')
				soma+=2;
			if(a[2]=='*')
				soma+=1;
		}
	}
	
	
}
