#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n;
	cin>>n;
	n++;
	int mat[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>mat[i][j];
		}
	}
	
	n--;
	int soma;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			//cout<<i<<" - "<<j<<endl;
			soma = mat[i][j] + mat[i][j+1] + mat[i+1][j] + mat[i+1][j+1];
			if(soma > 1){
				cout<<"S";
			}
			else{
				cout<<"U";
			}
		}
		cout<<endl;
	}
}
