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
    int a[10];
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
     for(int i=0;i<10;i++)
    {
        if(a[i]<=0)
        a[i]=1;
    }
     for(int i=0;i<10;i++)
    {
        cout<<"X["<<i<<"]"<<" = "<<a[i]<<endl;
    }
    
	return 0;
}