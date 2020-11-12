#include <iostream>
using namespace std;

int total(int n, int soma);

int main(){
	int n, caso = 0;
	while(cin>>n){
		caso++;
		int tota = total(n,1);
		if(tota == 1) cout<<"Caso "<<caso<<": "<<total(n,1)<<" numero"<<endl;
		else cout<<"Caso "<<caso<<": "<<total(n,1)<<" numeros"<<endl;
		cout<<"0";
		for(int i=1; i<=n; i++){
			int aux = i;
			while(aux--){
				cout<<" "<<i;
			}
		}
		cout<<endl<<endl;
	}
}

int total(int n, int soma){
	if(n == 0) return soma;
	soma += n;
	n--;
	return total(n, soma);
}
