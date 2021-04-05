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
    int n[100];
    double a;
    cin>>a;
    for(int i=0;i<100;i++)
    {
        cout<<"N["<<i<<"] = "<<fixed<<setprecision(4)<<a<<endl;
        a=a/2;
    }
	return 0;
}