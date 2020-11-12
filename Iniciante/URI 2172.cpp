#include <iostream>

using namespace std;

int main(){
	long long int x,m;
	cin>>x>>m;
	while(x && m){
		cout<<x*m<<endl;
		cin>>x>>m;
	}
}
