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
    int a[1000],c=0,n;
    cin>>n;
    for(int i=0;i<1000;i++)
    {
        cout<<"N["<<i<<"] = "<<c<<endl;
        c++;
        if(c==n)
        {
            c=0;
        }
        
    }
	return 0;
}