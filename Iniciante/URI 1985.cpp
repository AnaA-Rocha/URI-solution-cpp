#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int pedi, item, quant;
	double total = 0;
	cin>>pedi;
	while(pedi--){
		cin>>item>>quant;
		switch (item){
			case 1001:
				total += quant * 1.5;
			break;
			
			case 1002:
				total += quant * 2.5;
			break;
			
			case 1003:
				total += quant * 3.5;
			break;
			
			case 1004:
				total += quant * 4.5;
			break;
			
			case 1005:
				total += quant * 5.5;
			break;
		}
	}
	cout<<fixed<<setprecision(2)<<total<<endl;
}
