#include <iostream>
using namespace std;
int main()
{
	int w1=0,x1=0,y1=0,z1=0,w2=0,x2=0,y2=0,z2=0,wf,yf,xf,zf,t1,t2,tf;
	char dia1[4], dia2[4], horas1[3], horas2[3], minutos1[3], minutos2[3];
	cin.get(dia1,4);
	cin>>w1;
	cin>>x1;
	cin.get(horas1,3);
	cin>>y1;
	cin.get(minutos1,3);
	cin>>z1;
	cin.getline(dia1,0);
	cin.get(dia2,4);
	cin>>w2;
	cin>>x2;
	cin.get(horas2,3);
	cin>>y2;
	cin.get(minutos2,3);
	cin>>z2;
	
		
	t1=w1*86400+x1*3600+y1*60+z1;
	t2=w2*86400+x2*3600+y2*60+z2;
	tf=t2-t1;
	wf=tf/86400;
	xf=(tf%86400)/3600;
	yf=((tf%86400)%3600)/60;
	zf=((tf%86400)%3600)%60;
	cout<<wf<<" dia(s)"<<endl<<xf<<" hora(s)"<<endl<<yf<<" minuto(s)"<<endl<<zf<<" segundo(s)"<<endl;
	return 0;
}
