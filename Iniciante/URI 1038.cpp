#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main ()
{
	int c,q;
	float p1,p2,p3,p4,p5;
	cin >>c>>q;
	p1=q*4.00;
	p2=q*4.50;
	p3=q*5.00;
	p4=q*2.00;
	p5=1.50*q;
	if (c==1)
		cout<<"Total: R$ "<<fixed<<setprecision(2)<<p1<<endl;
	else
		if(c==2)
			cout<<"Total: R$ "<<fixed<<setprecision(2)<<p2<<endl;
		else
			if(c==3)
				cout<<"Total: R$ "<<fixed<<setprecision(2)<<p3<<endl;
			else
				if(c==4)
					cout<<"Total: R$ "<<fixed<<setprecision(2)<<p4<<endl;
				else
					if(c==5)
						cout<<"Total: R$ "<<fixed<<setprecision(2)<<p5<<endl;
	return 0;
}
