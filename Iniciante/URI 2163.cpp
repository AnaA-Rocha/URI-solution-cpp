#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(){
	vector<vector<int> > mat;
	vector<pair<int,int> > lugar;
	pair<int,int> par;
	unsigned int n, m, i, j;
	cin>>n>>m;
	
	int elemento;
	for(i=0; i< n; i++){
		vector<int> c1;
		for(j=0; j<m; j++){
			cin>>elemento;
			if(elemento == 42){
				par = make_pair(i,j);
				lugar.push_back(par);
			}
			c1.push_back(elemento);
		}
		mat.push_back(c1);
	}
	
	bool b = false;
	vector<pair<int,int> >::iterator it;
	m--;
	n--;
	for(it = lugar.begin(); it!=lugar.end() && b!=true; ++it){
		b = false;
		i = (*it).first;
		j = (*it).second;
		if(i>0 && j>0 && i<n && j<m && mat[i-1][j-1] == 7 &&
			mat[i-1][j] == 7 && mat[i-1][j+1] == 7 &&
			mat[i][j-1] == 7 && mat[i][j+1] == 7 &&
			mat[i+1][j-1] == 7 && mat[i+1][j] == 7 &&
			mat[i+1][j+1] == 7){
				b = true;
				cout<<++i<<" "<<++j<<endl;
		}
	}
	
	if(b == false){
		cout<<"0 0"<<endl;
	}
}
