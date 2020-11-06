#include <iostream>
using namespace std;
int main(){
	//impar i+1;
	//par i-1;
	int atacado = 0, n, i, aux;
	cin>>n;
	long long int v[n], visitado[n], nroubado = 0;
	for(i=0;i<n;i++){
		cin>>v[i];
		visitado[i]=0;
	}
	i = 0;
	while(i >= 0 && i < n){
		aux = v[i];
		visitado[i] = 1;
		if(v[i] > 0)
			v[i]--;
		//cout<<i<<" _ ";
		if(aux % 2 == 0 ) i--;
		else i++;
	}
	for(i=0;i<n;i++){
		nroubado += v[i];
		atacado += visitado[i]; 
	}
	cout<<atacado<<" "<<nroubado<<endl;
}
