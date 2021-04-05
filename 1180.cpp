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
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int a1[n];
    for(int i=0,j=0;i<n;i++,j++)
    {
        a1[j]=a[i];
    }
    sort(a1,a1+n);
    int z=a1[0];
    cout<<"Menor valor: "<<z<<endl;
    for(int i=0;i<n;i++)
    {
        if(a[i]==z){
        cout<<"Posicao: "<<i<<endl;
        return 0;
        }

    }
	return 0;
}