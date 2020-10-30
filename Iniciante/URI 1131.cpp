#include <iostream>
using namespace std;
int main ()
{
    int a,i,g,c,b,d,e;
    a=1;
    cin>>i>>g;
    if(i>g)
    {
        b=1;
        d=0;
        e=0;
    }
    else
        if(g>i)
        {
            b=0;
            d=1;
            e=0;
        }
        else
        {
            b=0;
            d=0;
            e=1;
        }
    cout<<"Novo grenal (1-sim 2-nao)"<<endl;
    cin>>c;
    while(c==1)
    {
        cin>>i>>g;
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        cin>>c;
        a++;
        if(i>g)
            b++;
        else
            if(g>i)
                d++;
            else
            e++;
    }
    cout<<a<<" grenais"<<endl;
    cout<<"Inter:"<<b<<endl;
    cout<<"Gremio:"<<d<<endl;
    cout<<"Empates:"<<e<<endl;
    if(b>d)
        cout<<"Inter venceu mais"<<endl;
    else
        if(d>b)
            cout<<"Gremio venceu mais"<<endl;
        else
            cout<<"Nao houve vencedor"<<endl;
}
