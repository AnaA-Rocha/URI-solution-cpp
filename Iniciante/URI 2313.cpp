#include <iostream>

using namespace std;

int main(){
	long long int a,b,c;
	cin>>a>>b>>c;
	//forma ^
	if(a<b+c && b<a+c && c<a+b){
		cout<<"Valido-";
		if(a==b && b==c){
			cout<<"Equilatero";
		}
		else{
			if(a==b || b==c || a==c){
				cout<<"Isoceles";
			}
			else{
				cout<<"Escaleno";
			}
		}
		cout<<endl<<"Retangulo: ";
		if(((a*a) == (b*b + c*c)) || ((b*b) == (a*a + c*c)) || ((c*c) == (b*b + a*a))){
			cout<<"S"<<endl;
		}
		else{
			cout<<"N"<<endl;
		}
	}
	else{
		cout<<"Invalido"<<endl;
	}
}
