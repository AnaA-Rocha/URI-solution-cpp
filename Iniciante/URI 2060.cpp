#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int d2 = 0, d3 = 0, d4 = 0, d5 = 0;
	while(n--){
		int a;
		cin>>a;
		if(a%5 == 0) d5++;
		if(a%4 == 0) d4++;
		if(a%3 == 0) d3++;
		if(a%2 == 0) d2++;
	}
	cout<<d2<<" Multiplo(s) de 2"<<endl;
	cout<<d3<<" Multiplo(s) de 3"<<endl;
	cout<<d4<<" Multiplo(s) de 4"<<endl;
	cout<<d5<<" Multiplo(s) de 5"<<endl;
	
}
