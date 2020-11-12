#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	while(n--){
		string galopeira;
		cin>>galopeira;
		cout.precision(2);
		cout<<fixed<<galopeira.size()*0.01<<endl;
		
	}
}
