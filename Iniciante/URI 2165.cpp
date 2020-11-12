#include <iostream>
#include <string>
using namespace std;

int main(){
	string texto;
	getline(cin,texto);
	if(texto.size() > 140){
		cout<<"MUTE"<<endl;
	}
	else{
		cout<<"TWEET"<<endl;
	}
}
