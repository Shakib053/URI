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
    int a[5],n,c=0;
    cin>>n;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]==n)
        c++;
    }
    cout<<c<<endl;
	return 0;
}
