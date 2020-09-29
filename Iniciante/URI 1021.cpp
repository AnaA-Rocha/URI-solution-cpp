#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    
	double n;
	int N,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23;
	cin >>n;
	N=n*100;
    a1=N/10000;
    a2=N%10000;
    a3=a2/5000;
    a4=a2%5000;
    a5=a4/2000;
    a6=a4%2000;
    a7=a6/1000;
    a8=a6%1000;
    a9=a8/500;
    a10=a8%500;
    a11=a10/200;
    a12=a10%200;
   	a13=a12/100;
   	a14=a12%100;
   	a15=a14/50;
   	a16=a14%50;
   	a17=a16/25;
   	a18=a16%25;
   	a19=a18/10;
   	a20=a18%10;
   	a21=a20/5;
   	a22=a20%5;
   	a23=a22/1;
	cout<<"NOTAS:\n"<<a1<<" nota(s) de R$ 100.00\n"<<a3<<" nota(s) de R$ 50.00\n"<<a5<<" nota(s) de R$ 20.00\n";
	cout<<a7<<" nota(s) de R$ 10.00\n"<<a9<<" nota(s) de R$ 5.00\n"<<a11<<" nota(s) de R$ 2.00\n";
    cout<<"MOEDAS:\n"<<a13<<" moeda(s) de R$ 1.00\n"<<a15<<" moeda(s) de R$ 0.50\n"<<a17<<" moeda(s) de R$ 0.25\n"<<a19<<" moeda(s) de R$ 0.10\n";
    cout<<a21<<" moeda(s) de R$ 0.05\n"<<a23<<" moeda(s) de R$ 0.01"<<endl;
    return 0;
}
