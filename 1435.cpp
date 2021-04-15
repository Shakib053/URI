#include<bits/stdc++.h>
#include<map>
#include<iterator>
#define pi 3.1416
#define ll long long
using namespace std;
int main()
{
    while (1)
    {   int n;
        cin>>n;
        if(n==0)
        return 0;
        else
        {    
            int aa[n][n];
            int s;
            if(n%2==0)
            s=n/2;
            else
            s=(n/2)+1;
            int a=0,b=n;
            for(int k=1;k<=s;k++){
               for(int i=a;i<b;i++)
                {
                for(int j=a;j<b;j++)
                {
                    aa[i][j]=k;
                }
            }
             a++;
             b--;
            }
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {  
                    if(j==0)
                    printf("%3d",aa[i][j]);
                    else
                    printf(" %3d",aa[i][j]);
                    
                }
                cout<<endl;
            }
            cout<<endl;
        }
    }
    
    return 0;
}
