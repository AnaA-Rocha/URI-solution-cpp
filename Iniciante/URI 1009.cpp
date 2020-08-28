#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string a;
	double b, c, d, TOTAL;
	cout << fixed << setprecision(2);
	cin >> a >> b >> c;
	d=c*0.15;
	TOTAL= d + b;
	cout << fixed << setprecision(2);
	cout <<"TOTAL = R$ "<<TOTAL<<endl;
	return 0;
}
