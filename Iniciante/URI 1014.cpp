#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int x;
	float y,t;
	cin >> x >> fixed>>setprecision(1)>>y;
	cout<<fixed<<setprecision(3);
	t=x/y;
	cout <<t<<" km/l"<<endl;
	return 0;
}
