#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int h1,h2,hf,m1,m2,mf;
	cin>>h1>>m1>>h2>>m2;
	if(h1==h2 && m1==m2)
	{
		hf=24;
		mf=0;
	}
	else if(h1==h2 && m1>m2)
		{
			hf=23;
			mf=m2-m1+60;
		}	
		
			else if(h1>h2 &&m1>m2)
				{
					hf=abs(h1-h2+1-24);
					mf=abs(m1-m2-60);
				}
				else if(m2<m1)
				{
					hf=h2-h1-1;
					mf=m2-m1+60;	
				}
					else
					{
						hf=h2-h1;
						mf=m2-m1;
					}
	cout<<"O JOGO DUROU "<<hf<<" HORA(S) E "<<mf<<" MINUTO(S)"<<endl;
	return 0;
}
