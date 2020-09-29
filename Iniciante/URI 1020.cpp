#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int a,b, m, c, d;
	cin >> d;
    a=d/365;
    b=d%365;
    m=b/30;
    c=b%30;
    cout <<a<<" ano(s)\n"<<m<<" mes(es)\n"<<c<<" dia(s)"<<endl;
    return 0;
}
