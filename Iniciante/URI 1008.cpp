#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float a, b, c, SALARY, NUMBER;
	cin >> a >> b >> c;
	NUMBER = a;
	SALARY = b*c;
	cout <<"NUMBER = "<<NUMBER<<endl;
	cout <<fixed <<setprecision(2);
	cout <<"SALARY = U$ "<<SALARY<<endl;
	
	return 0;
}
