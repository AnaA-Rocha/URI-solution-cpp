#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int main(){
	// j1 = par n1 + n2 = par -> j1 vence
	// j1 = par n1 + n2 = impar -> j2 vence
	
	// j1 = roubo j2 = acusa -> j2 vence
	// j1 = roubo j2 = n acusa -> j1 vence
	// j1 = n roubo j2 = acusa -> j1 vence
	
	//p = 1 -> par
	//r = 1 -> roubou
	//a = 1 -> acusou
	//0 1 2 0 0
	int p,j1,j2,r,a;
	cin>>p>>j1>>j2>>r>>a;
	if(r == 0 && a == 0){
		j1+=j2;
		if((j1%2 == 0 && p == 1) || (j1%2 == 1 && p == 0))
			cout<<"Jogador 1 ganha!"<<endl;
		else
			cout<<"Jogador 2 ganha!"<<endl;
	}
	else{
		if(r == 1 && a == 1)
			cout<<"Jogador 2 ganha!"<<endl;
		else
			cout<<"Jogador 1 ganha!"<<endl;
	}
}
