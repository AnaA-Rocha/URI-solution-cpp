#include <iostream>

using namespace std;

int main(){
	
	int t,n;
	cin>>t;
	while(t){
		while(t--){
			int soma = 1;
			cin>>n;
			n--;
			if(n%2){
				soma++;
				n--;
			}
			soma += (n*2);
			cout<<soma<<endl;
		}
		cin>>t;
	}
	
}
