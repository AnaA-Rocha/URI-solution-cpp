#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int a,b,c;
	scanf(" %d %d %d",&a,&b,&c);
	if((a>b && b<=c) || (b>a && c>b && (c-b)>=(b-a)) || (a>b && b>c && (b-c)<(a-b)) || (a==b && c>a))
		printf(":)\n");
	else
		printf(":(\n");
	
}
