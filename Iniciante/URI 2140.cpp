#include <iostream>

using namespace std;

int main(){
	
	//4 - 7 - 12 - 22 - 52 - 102
	//10 - 15 - 25 - 55 - 105
	//20 - 70 - 120
	//100 - 150
	//200
	
	int n,m;
	cin>>n>>m;
	while(n && m){
		int cont = 0;
		m-=n;
		while(m >= 100 && cont < 4)
		{
			m-=100;
			cont++;
		}
		while(m >= 50 && cont < 4){
			m-=50;
			cont++;
		}
		while(m >= 20 && cont < 4){
			m-=20;
			cont++;
		}
		while(m >= 10 && cont < 4){
			m-=10;
			cont++;
		}
		while(m >= 5 && cont < 4){
			m-=5;
			cont++;
		}
		while(m >= 2 && cont < 4){
			m-=2;
			cont++;
		}
		if(cont == 2){
			cout<<"possible"<<endl;
		}
		else{
			cout<<"impossible"<<endl;
		}
		cin>>n>>m;
	}
	
}
