#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int r=((c*60)+d)-((a*60)+b);
    if(r<=0)
    {
        r=r+24*60;
    }
    int h=r/60;
    int m=r%60;
    cout<<"O JOGO DUROU "<<h<<" HORA(S) E "<<m<<" MINUTO(S)"<<endl;
    return 0;
}