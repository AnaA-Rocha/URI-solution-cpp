#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double xf, yf, xi, yi, vi, r1, r2, xr, yr, d, atq;
	while(cin >> xf >> yf >> xi >> yi >> vi >> r1 >> r2){
		xr = (xi - xf) * (xi - xf);
		yr = (yi - yf) * (yi - yf);
		
		d = sqrt(xr + yr) + (vi * 1.50);
		atq = r1 + r2;
		
		if(atq >= d) cout<<"Y\n";
		else cout<<"N\n";
		
		
		/*if(yf == yi || xf == yf){
			xf += r1 + r2;
			xi += 1.5 * vi;
			if(xf >= xi) cout << "Y" << endl;
			else cout << "N" << endl;
		}
		else{
			if(xf == xi){
				yf += r1 + r2;
				yi += 1.5 * vi;
				if(yf >= yi) cout << "Y" << endl;
				else cout << "N" << endl;
			}
			else{
				xf=0;
			} //os dois são diferentes
		}*/
		
	}
}
