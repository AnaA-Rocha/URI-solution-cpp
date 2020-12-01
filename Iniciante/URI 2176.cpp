#include <iostream>
#include <string>

using namespace std;

int main(){
	string bits;
	cin>>bits;
	
	string::iterator it;
	int soma = 0;
	for(it = bits.begin(); it!=bits.end(); ++it){
		if(*it == '1'){
			soma++;
		}
	}
	if(soma%2){//ímpar
		cout<<bits<<"1"<<endl;
	}
	else{
		cout<<bits<<"0"<<endl;
	}
}
