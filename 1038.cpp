#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;


int main()
{    
    double a[5];
    a[0]=4;
    a[1]=4.5;
    a[2]=5;
    a[3]=2;
    a[4]=1.5;
    /*for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    } */
    int n,b;
    cin>>n>>b;
    double r=a[n-1]*b;
    cout<<"Total: R$ "<<fixed<<setprecision(2)<<r<<endl;
    return 0;
}