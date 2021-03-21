#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
    int a;
    cin>>a;
    while(a--)
    {
        double b,c,d;
        cin>>b>>c>>d;
        cout<<fixed<<setprecision(1)<<(b*2+c*3+d*5)/10<<endl;
    }
    return 0;

}