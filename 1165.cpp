#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;

#define ll long long
#define pi 3.1416
#define M 10000000
bool marked[M];

bool prime(int n) {
  if (n < 2) return false;
  if (n == 2) return true;
  if (n % 2 == 0) return false;
  if(marked[n]==false) return true;
  else return false;

}

void sieve(int n) {
  for (int i = 3; i * i <= n; i += 2) {
    if (marked[i] == false) { // i is a prime
      for (int j = i * i; j <= n; j = j + i) {
        marked[j] = true;
      }
    }
  }
}
int main()
{   
    int t;
    cin>>t;
    sieve(10000000);
    while (t--)
    {
        int a;
        cin>>a;
        if(prime(a)==true)
        cout<<a<<" eh primo\n";
        else
        cout<<a<<" nao eh primo\n";

    }
    

    
	return 0;
}