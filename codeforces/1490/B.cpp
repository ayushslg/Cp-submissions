#include<bits/stdc++.h>
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define ll long long int
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#pragma GCC optimize("O3")
using namespace __gnu_pbds;
#define ordered_set tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>//s.order_of_key(val) *s.find_by_order(ind)
using namespace std;
#define f(n) for(ll i=0;i<n;i++)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define input(arr,n) for(ll i1=0;i1<n;i1++ )cin>>arr[i1]
#define endl "\n"
#define vll vector<ll>
#define vlll vector<vll>
#define all(x) x.begin(),x.end()
ll power(ll x, ll y, ll p) { 
    ll res = 1;    x = x % p;  
    while(y > 0) {
        if(y & 1) res = (res*x) % p; 
        y = y>>1;    x = (x*x) % p; 
    } return res; 
}
inline void solve()
{
    ll n;
    cin>>n;
    vll a(n);
    input(a,n);
    ll c0=0,c1=0,c2=0;
    f(n)
    {
        if(a[i]%3==0)
        c0++;
        else if(a[i]%3==1)
        c1++;
        else
        c2++;
    }
    if(c1==c2 and c2==c0)
    {
        cout<<0<<endl;
        return;
    }
    ll p=n/3;
    ll ans=0;
   // cout<<c0<<" "<<c1<<" "<<c2<<endl;
    while(c0>p)
    {
        c0--;
        ans++;
        c1++;
    }
    while(c1>p)
    {
        c1--;
        ans++;
        c2++;
    }
    while(c2>p)
    {
        c0++;
        c2--;
        ans++;
    }
    while(c0>p)
    {
        c0--;
        ans++;
        c1++;
    }
    while(c1>p)
    {
        c1--;
        ans++;
        c2++;
    }
    while(c2>p)
    {
        c0++;
        c2--;
        ans++;
    }
    cout<<ans<<endl;
    
}
int main()
{
    Imposter
    
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
        
    }
    return 0;
}