#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a,b,d;
	float l;
	cin >> a >> b;
	d = a * b;
	l = d/12.0;
	cout << fixed << setprecision(3);
	cout << l <<endl;
	return 0;
}
