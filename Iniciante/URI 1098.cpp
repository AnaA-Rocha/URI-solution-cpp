#include <iostream>
using namespace std;
int main ()
{
	float i,j;
	for(i=0;i<=2.2;i=i+0.2)
		for(j=i+1;j<=i+3.2;j++)
			cout<<"I="<<i<<" J="<<j<<endl;
}
