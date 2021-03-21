#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        if(a%2!=0 && a>0)
        {
            cout<<"ODD POSITIVE\n";
        }
        else if(a%2!=0 && a<0)
        {
            cout<<"ODD NEGATIVE\n";
        }
        else if(a==0)
        {
            cout<<"NULL\n";
        }
        else if(a%2==0 && a<0)
        {
            cout<<"EVEN NEGATIVE\n";
        }
        else if(a%2==0 && a>0)
        {
            cout<<"EVEN POSITIVE\n";
        }
    }
    
    return 0;

}