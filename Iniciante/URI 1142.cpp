#include <iostream>
using namespace std;
int main ()
{
    int n,c,a,d;
    c=1;
    d=1;
    cin>>n;
    while(c<=n)
    {
        for(c=1;c<=n;c++)
        {
            if(c==1)
                d=c;
            else
                d=c+3*(c-1);
            for(a=d;a<d+3;a++)
            {
               	cout<<a<<" ";
            }
            cout<<"PUM"<<endl;
        }
    }
}
