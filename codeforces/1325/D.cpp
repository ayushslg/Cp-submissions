#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll u,v;
    cin>>u>>v;
    if((u%2!=v%2)||u>v)
    {
        cout<<-1;
        return 0;
    }
    if(u==v)
    {
        if(!u)
        cout<<0;
        else
        cout<<1<<endl<<u;
        return 0;
        
    }
    ll x=(v-u)/2;
    if(u&x)
    cout<<3<<endl<<u<<" "<<x<<" "<<x;
    else
    cout<<2<<endl<<(u^x)<<" "<<x;
    return 0;
    
}