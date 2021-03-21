#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;


int main()
{   
    map<int,string>s;
    s.insert({61,"Brasilia"});
    s.insert({71,"Salvador"});
    s.insert({11,"Sao Paulo"});
    s.insert({21,"Rio de Janeiro"});
    s.insert({32,"Juiz de Fora"});
    s.insert({19,"Campinas"});
    s.insert({27,"Vitoria"});
    s.insert({31,"Belo Horizonte"});
    map<int,string> :: iterator i;
    /*for(i=s.begin();i!=s.end();i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }*/
    int c;
    cin>>c;
    map<int,string> :: iterator it;
    it=s.find(c);
    if(it==s.end())
    {
        cout<<"DDD nao cadastrado\n";
    }
    else { 
        //cout<<it->first<<" "<<it->second<<endl;
        cout<<it->second<<endl;}
    return 0;
}