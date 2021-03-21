#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
    int n;
    cin>>n;
    while(n--)
    {
        double x,y;
        cin>>x>>y;
        if(y==0)
        cout<<"divisao impossivel\n";
        else
        cout<<fixed<<setprecision(1)<<(double)(x/y)<<endl;
    }
 
    
    return 0;

}