#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
    int a[5];
    int count=0;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            count=count+1;
        }
    }
    cout<<count<<" valores pares\n";
    return 0;

}