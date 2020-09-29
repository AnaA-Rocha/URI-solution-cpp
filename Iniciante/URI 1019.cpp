#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int t,h,m,s,h1; 
	cin >> t;
	h = t / 3600; 
	h1 = t % 3600;
	m = h1 / 60;
	s = h1 % 60; 
	cout <<h<<":"<<m<<":"<<s<<endl;
	return 0;
}
