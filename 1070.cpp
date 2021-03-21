#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
    int x;
    cin>>x;
    for(int i=x;i<=x+11;i++)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
        }
    }
    return 0;

}