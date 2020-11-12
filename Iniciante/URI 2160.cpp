#include <iostream>
#include <string>
using namespace std;
int main(){
	//80 caracteres
	string paragrafo;
	getline(cin, paragrafo);
	//cout<<paragrafo;
	
	int tamanho;
	tamanho = paragrafo.size();
	
	if(tamanho > 80)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
}
