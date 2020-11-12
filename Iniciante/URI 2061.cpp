#include <iostream>

using namespace std;

int main(){
	
	//clicou: fecha = -1
	//fechou: abre = +1
	
	int n, m;
	string acao;
	cin>>n>>m;
	while(m--){
		cin>>acao;
		if(acao[0] == 'f'){
			n++;
		}
		else{
			n--;
		}
	}
	cout<<n<<endl;
} 
