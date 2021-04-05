#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;

#define ll long long
#define pi 3.1416
#define M 10000000
int main()
{
    int t,a;
    cin>>t;
    unsigned ll f[61];
    unsigned ll f1=0,f2=1;
    f[0]=f1;
    f[1]=f2;
    for(int i=2;i<61;i++)
    {
        unsigned ll f3=f1+f2;
        f[i]=f3;
        f1=f2;
        f2=f3;
    }
    /*for(int i=0;i<60;i++)
    {
        cout<<f[i]<<endl;
    }*/
    while (t--)
    {
        cin>>a;
        cout<<"Fib("<<a<<") = "<<f[a]<<endl; 

    }
    
	return 0;
}