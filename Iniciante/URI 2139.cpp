#include <iostream>
using namespace std;
int main()
{
	int d,m,a;
	while(cin>>m>>d)
	if(d==24 && m==12)
	{
		cout<<"E vespera de natal!"<<endl;
	}
	else
	{
		if(d>25 && m==12)
		{
			cout<<"Ja passou!"<<endl;
		}
		else
		{
			if(d==25 && m==12)
			{
				cout<<"E natal!"<<endl;
			}
			else
			{
				switch (m)
					{
						case 1:
							a=360-d;
							break;
						case 2:
							a=360-d-31;
							break;
						case 3:
							a=360-d-60;
							break;
						case 4:
							a=360-d-91;
							break;
						case 5:
							a=360-d-121;
							break;
						case 6:
							a=360-d-152;
							break;
						case 7:
							a=360-d-182;
							break;
						case 8:
							a=360-d-213;
							break;
						case 9:
							a=360-d-244;
							break;
						case 10:
							a=360-d-274;
							break;
						case 11:
							a=360-d-305;
							break;
						case 12:
							a=360-d-335;
							break;
					}
					cout<<"Faltam "<<a<<" dias para o natal!"<<endl;
			}
		}
	}
}
