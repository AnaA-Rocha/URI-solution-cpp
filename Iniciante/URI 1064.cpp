#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double X, N=0, X1=0;
    int i=0;
    while(i!=6){
        cin>>X;
        i++;
        if(X>0){
            N++;
              X1=X1+X;
        }
      
    }
    X1=X1/N;
	
   
    cout<<N<<" valores positivos"<<endl;
     cout << setprecision(1);
    cout<<fixed<<X1<<endl;
    return 0;
}
