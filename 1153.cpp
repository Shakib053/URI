#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int f(int n)
{
    if(n>1)
    return n*f(n-1);
    else if(n==1)
    return 1;
}
int main()
{    
   int n;
   cin>>n;
   cout<<f(n)<<endl;
   
 return 0;

}