#include<bits/stdc++.h>
#include<map>
#include<iterator>
#define pi 3.1415
#define ll long long
using namespace std;
int main()
{  
    int n;
    
    while (scanf("%d",&n)!=EOF)
    {
        int a[n][n];
            int k=n-1;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(i==j)
                    a[i][j]=1;
                    else
                    a[i][j]=3;
                    if(j==k)
                    a[i][k]=2;
                }
               k--;
            }
            
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
        {
            cout<<a[i][j];
        }
         cout<<endl;
        }
        }


    
    
    return 0;
}
