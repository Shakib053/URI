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
    int v[10];
    int a;
    cin>>a;
    for(int i=0,j=1;i<10;i++,j=j*2)
    {
        cout<<"N["<<i<<"] = "<<a*j<<endl;
    }
	return 0;
}