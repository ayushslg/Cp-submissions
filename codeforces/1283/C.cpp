#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vlll vector<vll>
#define pb push_back
#define pf push_front
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define f(n) for(ll i=0;i<n;i++)
#define all(x) x.begin(),x.end()


int main()
{
      
      
       Imposter
       
       
    ll n;
    cin>>n;
    ll a[n+1];
    for(ll i=1;i<=n;i++) cin>>a[i];
    ll vis[n+1];
    memset(vis,0,sizeof(vis));
    for(ll i=1;i<=n;i++)
    {
        vis[a[i]]=1;
    }
    vll t,p;
    for(ll i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            t.pb(i);
            
        }
        if(a[i]==0)
        {
            p.pb(i);
        }
    }
    sort(all(t));
    sort(all(p));
    for(ll i=1;i<t.size();i++)
    {
        if(t[i]==p[i])
        {
            swap(t[i],t[i-1]);
        }
    }
    if(t[0]==p[0])
    swap(t[0],t[t.size()-1]);
    for(ll i=0;i<t.size();i++)
    {
        a[p[i]]=t[i];
    }
    for(ll i=1;i<=n;i++) cout<<a[i]<<" ";
    return 0;
}