#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string n,m;
	int caso = 0;
	size_t found;
	while(cin>>n){
		cin>>m;
		int cont = 0, posi;
		found = m.find(n);
		while(found != string::npos){
			cont++;
			posi = found;
			found = m.find(n,found+1);
		}
		caso++;
		cout<<"Caso #"<<caso<<":"<<endl;
		if(cont){
			cout<<"Qtd.Subsequencias: "<<cont<<endl;
			cout<<"Pos: "<<posi+1<<endl;
		}
		else{
			cout<<"Nao existe subsequencia"<<endl;
		}
		cout<<endl;
	}
} 
