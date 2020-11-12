#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n;
	cin>>n;
	double fracao = 0.5;
	if(n == 1){
		cout<<"1.5000000000"<<endl;
	}
	else{
		if(n == 0){
			cout<<"1.0000000000"<<endl;
		}
		else{
			n--;
			while(n--){
				fracao = 1.0/(fracao+2);
			}
			cout<<fixed<<setprecision(10)<<++fracao<<endl;
		}
	}
}
