#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
    int n,in=0,out=0;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        if(a>=10 && a<=20)
        {
            in=in+1;
        }
        else 
        {
            out=out+1;
        }
    }
    cout<<in<<" in\n";
    cout<<out<<" out\n";
    return 0;

}