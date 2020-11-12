#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	long long int n;
	cin>>n;
	cout.precision(1);
	cout<<fixed<<n/log(n)<<" "<<1.25506 * n/log(n) <<endl;
}
