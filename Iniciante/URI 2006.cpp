#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;
int main(){
	int n, a, correto = 0;
	cin>>n;
	for(int i=0;i<5;i++){
		cin>>a;
		if(a == n) correto ++;
	}
	cout<<correto<<endl;
}
