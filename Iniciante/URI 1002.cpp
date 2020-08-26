#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double area, n, raio, r, A;
	n=3.14159;
	cin >> raio;
	cout << fixed << setprecision(4);
	r = raio*raio;
	area = n*r;
	cout << "A=" << area <<endl;
	
	return 0;
	
}
