#include <iostream>
using namespace std;
int main()
{
    
    int n,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13;
    cin >>n;
    a1=n/100;
    a2=n%100;
    a3=a2/50;
    a4=a2%50;
    a5=a4/20;
    a6=a4%20;
    a7=a6/10;
    a8=a6%10;
    a9=a8/5;
    a10=a8%5;
    a11=a10/2;
    a12=a10%2;
    a13=a12/1;
    cout<<n<<"\n"<<a1<<" nota(s) de R$ 100,00\n"<<a3<<" nota(s) de R$ 50,00\n"<<a5<<" nota(s) de R$ 20,00\n";
    cout<<a7<<" nota(s) de R$ 10,00\n"<<a9<<" nota(s) de R$ 5,00\n"<<a11<<" nota(s) de R$ 2,00\n";
    cout<<a13<<" nota(s) de R$ 1,00"<<endl;
    return 0;
}
