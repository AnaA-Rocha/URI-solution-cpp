#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
	int n,aux;
	string s = "";
	cin>>n;
	aux = n/900;
	if(aux > 0){
		s += "CM";
		n -= 900;
	}
	aux = n/500;
	if(aux > 0){
		n-=500*aux;
		while(aux--){
			s += "D";
		}
	}
	aux = n/400;
	if(aux > 0){
		n-=400;
		s += "CD";
	}
	aux = n/100;
	if(aux > 0){
		n-=100*aux;
		while(aux--){
			s += "C";
		}
	}
	aux = n/90;
	if(aux > 0){
		n-=90;
			s += "XC";
	}
	aux = n/50;
	if(aux > 0){
		n-=50*aux;
		while(aux--)
			s += "L";
	}
	aux = n/40;
	if(aux > 0){
		n-=40;
		s += "XL";
	}
	aux = n/10;
	if(aux > 0){
		n-=10*aux;
		while(aux--)
			s += "X";
	}
	aux = n/9;
	if(aux > 0){
		n-=9;
		s += "IX";
	}
	aux = n/5;
	if(aux > 0){
		n-=5*aux;
		while(aux--)
			s += "V";
	}
	aux = n/4;
	if(aux > 0){
		n-=4;
		s += "IV";
	}
	while(n--)
		s += "I";
	cout<<s<<endl;
}
