#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,t,a1,b1,c1,d1,e1,a2,b2,c2,d2,e2,t1,z,t3,t4,a3,a4,b3,b4,c3,c4,d3,d4,e3,e4;
	cin>>a2>>b2>>c2>>d2>>e2;
	if(a2%2==0)
	{
		a=1;
		a1=0;
	}
	else
	{
		a=0;
		a1=1;
	}
	if(b2%2==0)
	{
		b=1;
		b1=0;
	}
	else
	{
		b=0;
		c1=1;
	}
	if(c2%2==0)
	{
		c=1;
		c1=0;
	}
	else
	{
		c=0;
		c1=1;
	}
	if(d2%2==0)
	{
		d=1;
		d1=0;
	}
	else
	{
		d=0;
		d1=1;
	}
	if(e2%2==0)
	{
		e=1;
		e1=0;
	}
	else
	{
		e=0;
		e1=1;
	}
	t=a+b+c+d+e;
	t1=a1+b1+c1+d1+e1;
	if(a2>0)
	{
		a3=1;
		a4=0;
	}
	else if(a2<0)
		{
			a3=0;
			a4=1;
		}
		else
		{
			a3=0;
			a4=0;
		}
	if(b2>0)
	{
		b3=1;
		b4=0;
	}
	else if(b2<0)
		{
			b3=0;
			b4=1;
		}
		else
		{
			b3=0;
			b4=0;
		}
	if(c2>0)
	{
		c3=1;
		c4=0;
	}
	else if(c2<0)
		{
			c3=0;
			c4=1;
		}
		else
		{
			c3=0;
			c4=0;
		}
	if(d2>0)
	{
		d3=1;
		d4=0;
	}
	else if(d2<0)
		{
			d3=0;
			d4=1;
		}
		else
		{
			d3=0;
			d4=0;
		}
	if(e2>0)
	{
		e3=1;
		e4=0;
	}
	else if(e2<0)
		{
			e3=0;
			e4=1;
		}
		else
		{
			e3=0;
			e4=0;
		}
	t3=a3+b3+c3+d3+e3;
	t4=a4+b4+c4+d4+e4;
	cout<<t<<" valor(es) par(es)"<<endl;
	cout<<t1<<" valor(es) impar(es)"<<endl;
	cout<<t3<<" valor(es) positivo(s)"<<endl;
	cout<<t4<<" valor(es) negativo(s)"<<endl;
	return 0;
}
