#include <iostream>
using namespace std;
int main ()
{
    double a,b,c,x,y,z;
    cin>>a>>b>>c;
	if(a>=b && a>=c)
    	x=a;
    else if (b>=a && b>=c)
    		x=b;
    	else
    		x=c;
    if((a<=b && a>=c) || (a>=b && a<=c))
		y=a;
	else if((b<=a && b>=c) || (b>=a && b<=c))
			y=b;
		else
			y=c;
	if(a<=b && a<=c)
		z=a;
	else if(b<=a && b<=c)
			z=b;
		else
		{
			z=c;
		}
	if (x>=y+z)
    {
    	cout<<"NAO FORMA TRIANGULO"<<endl;
		return 0;
	}
     if((x*x) == (y*y + z*z))
        {
            cout<<"TRIANGULO RETANGULO"<<endl;
            return 0;
        }
    	 if((x*x) > (y*y + z*z))
    			cout<<"TRIANGULO OBTUSANGULO"<<endl;
        	 if((x*x) < (y*y + z*z))
            		cout<<"TRIANGULO ACUTANGULO"<<endl;
   
    if (x==y && x==z)
	    cout<<"TRIANGULO EQUILATERO"<<endl;
	else if ((x==y && y!=z) || (x==z && x!=y) || (y==z && y!=x))
        cout<<"TRIANGULO ISOSCELES"<<endl;
        else
        	return 0;
    return 0;
}	
