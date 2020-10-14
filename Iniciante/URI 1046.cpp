#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int h1,h2,hf,x,y;
	cin>>h1>>h2;
	if(h1>=h2)
		hf=h2+24-h1;
	else
		hf=h2-h1;
	cout<<"O JOGO DUROU "<<hf<<" HORA(S)"<<endl;
	return 0;
}
