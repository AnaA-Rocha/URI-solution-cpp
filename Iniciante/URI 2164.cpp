#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
	int n;
	cin>>n;
	double resposta = ((pow(((1+sqrt(5))/2),n)) - (pow(((1-sqrt(5))/2),n)))/sqrt(5);
	cout<<fixed<<setprecision(1)<<resposta<<endl;
}
