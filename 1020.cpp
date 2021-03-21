#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;


int main()
{  
    int n;
    cin>>n;
    int y=n/365;
    n=n-y*365;
    int m=n/30;
    n=n-m*30;
    cout<<y<<" ano(s)\n";
    cout<<m<<" mes(es)\n";
    cout<<n<<" dia(s)\n";
     
   
    return 0;
}