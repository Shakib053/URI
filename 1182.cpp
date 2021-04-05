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
    double a[12][12];
    int n;
    char k;
    double sum=0;
    cin>>n;
    cin>>k;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<12;i++)
        {
            sum=sum+a[i][n];
        }
    if(k=='S')
    {
        cout<<sum<<endl;
    }
    else if(k=='M')
    cout<<fixed<<setprecision(1)<<sum/12<<endl;
   
	return 0;
}