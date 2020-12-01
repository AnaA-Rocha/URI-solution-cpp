#include <iostream>

using namespace std;

int main(){
	unsigned long long int n;
	cin>>n;
	while(n!=-1){
		if(n==0){
			cout<<"0"<<endl;
		}
		else{
			cout<<--n<<endl;
		}
		cin>>n;
	}
}
