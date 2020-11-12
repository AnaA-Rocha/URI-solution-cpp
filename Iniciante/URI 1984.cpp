#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	cin>>a;
	string::iterator it = a.end();
	for(it = a.end()-1; it != a.begin()-1; --it){
		cout<<*it;
	}
	cout<<endl;
}
