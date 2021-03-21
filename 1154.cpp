#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{    
   
    double s=0,c=0;
    while(1)
    {
        int a;
        cin>>a;
        if(a>=0)
        {   
            c=c+1;
            s=s+a;
        }

        else{
            cout<<fixed<<setprecision(2)<<s/c<<endl;
            break;
        }
    }
    return 0;

}