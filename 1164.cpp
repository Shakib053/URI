#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;

#define ll long long
#define pi 3.1416
int main()
{   
    int t;
    cin>>t;
    while (t--)
    {
        int a,sum=0;
        cin>>a;
        for(int i=1;i<a;i++)
        {
            if(a%i==0)
            sum=sum+i;
        }
        if(sum==a)
        cout<<a<<" eh perfeito"<<endl;
        else
        cout<<a<<" nao eh perfeito\n";
    }
    

    
	return 0;
}