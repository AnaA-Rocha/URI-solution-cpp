#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
	float x,y,n=1;
	while(n=1)
	{
		cin>>x;
		while(x<0 || x>10)
		{
			cout<<"nota invalida"<<endl;
			cin>>x;
		}
		cin>>y;
		while(y<0 || y>10)
		{
			cout<<"nota invalida"<<endl;
			cin>>y;
		}
		cout<<fixed<<setprecision(2)<<"media = "<<(x+y)/2<<endl;
	//	cout<<"novo calculo (1-sim 2-nao)"<<endl;
	//	cin>>n;
		do
		{
			cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> n;
		}
        while(n!=1 && n!=2);
        if(n==2)
        {
        	break;
		}
	}
}
