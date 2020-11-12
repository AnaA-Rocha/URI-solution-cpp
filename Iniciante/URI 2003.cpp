#include <iostream>
using namespace std;
int main(){
	//8:00
	//60 min
	string s;
	while(cin>>s){
		int m = (s[2] - 48)*10 + s[3] - 48 + ((s[0] - 48) * 60);
		int resul = m - 480 + 60;
		if(resul > 0){
			cout<<"Atraso maximo: "<<resul<<endl;
		}
		else{
			cout<<"Atraso maximo: 0"<<endl;
		}
		
		
	}
}
