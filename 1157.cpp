#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;

#define ll long long
#define pi 3.1416
int main()
{   
	int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
        }
    }
 
	return 0;
}