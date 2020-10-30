#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    string a,b;
    int n,c,n1;
    cin>>n;
    for(c=1;c<=n;c++)
    {
        cin>>n1;
        if(n1%2==0 && n1!=0)
            a="EVEN";//even
        else if(n1%2==1 || n1%2==-1)
                a="ODD";
                else
                    a="NULL";
        if(n1>0)
            b="POSITIVE";
        else
            b="NEGATIVE";
    if(a=="NULL")
        cout<<a<<endl;
    else
        cout<<a<<" "<<b<<endl;
    }
    
}
