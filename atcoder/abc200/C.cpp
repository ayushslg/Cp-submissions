#include<bits/stdc++.h>
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define ll long long int
using namespace std;
#define f(n) for(ll i=0;i<n;i++)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define input(arr,n) for(ll i1=0;i1<n;i1++ )cin>>arr[i1]
#define endl "\n"
#define vll vector<ll>
#define vlll vector<vll>
#define all(x) x.begin(),x.end()
ll len(ll n)
{
    ll len=0;
    while(n)
    {
        n=n/10;
        len++;
    }
    return len;
}
inline void solve()
{
    ll n;
    cin>>n;
    ll ans=0;
    vll a(n);
    input(a,n);
    map<ll,ll>mp;
    f(n)
    {
        a[i]=a[i]%200;
        mp[a[i]]++;
    }
    for(auto it: mp)
    {
        ans+=((it.second)*(it.second-1))/2;
    }
    cout<<ans<<endl;
}
int main()
{
    Imposter
    
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
        
    }
    return 0;
}