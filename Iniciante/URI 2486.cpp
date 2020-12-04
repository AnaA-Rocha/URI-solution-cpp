#include <iostream>
#include <string>
using namespace std;

int main(){
	int t,soma,quanti;
	string comida;
	
	cin>>t;
	while(t){
		soma = 0;
		while(t--){
			cin>>quanti;
			cin.ignore();
			getline(cin,comida);
			//cout<<"COMIDA: "<<comida<<comida.size()<<endl;
			if(comida == "suco de laranja") soma += quanti * 120;
			else if(comida == "goiaba vermelha") soma += quanti * 70;
			else if(comida == "manga") soma += quanti * 56;
			else if(comida == "laranja") soma += quanti * 50;
			else if(comida == "brocolis") soma += quanti * 34;
			else soma += quanti * 85;
			
		//	cout<<"SOMA: "<<soma<<endl;
		}
		//cout<<"SOMA: "<<soma<<endl;
		if(soma < 111){
			cout<<"Mais "<<110-soma;
		}
		else if(soma > 130){
			cout<<"Menos "<<soma-130;
		}
		else 
			cout<<soma;
		cout<<" mg"<<endl;
		cin>>t;
	}
}
