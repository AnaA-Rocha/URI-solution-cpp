#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	while(n--){
		int h, m, o;
		cin>>h>>m>>o;
		if(h < 10){
			cout<<"0"<<h;
		}else{
			cout<<h;
		}
		cout<<":";
		if(m < 10){
			cout<<"0"<<m;
		}else{
			cout<<m;
		}
		if(o){
			cout<<" - A porta abriu!"<<endl;
		}
		else{
			cout<<" - A porta fechou!"<<endl;
		}
	}
}
