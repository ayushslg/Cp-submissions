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
vll maxi(vll &a)
{
    vll ans=a;
    ll n=a.size();
    set<ll> num;
    for( ll i=1; i<=n; i++ ) num.insert(i);
    num.erase(a[0]);
    for( ll i=1; i<n; i++ )
    {
        auto now = num.lower_bound(a[i]);
        if( *now!=a[i] ) now--;
        ans[i] = *now;
        num.erase(now);
    }
    return ans;
}
vll mini(vll &a)
{
    vll ans=a;
    ll n=a.size();
    set<ll> num;
    for( ll i=1; i<=n; i++ ) num.insert(i);
    num.erase(a[0]);
    for( ll i=1; i<n; i++ )
    {
        if( a[i]!=a[i-1] ) {num.erase(a[i]);
        continue;}
        ans[i] = *num.begin();
        num.erase(num.begin());
    }
    return ans;
}
inline void solve()
{
    ll n;
    cin>>n;
    vll a(n);
    input(a,n);
    vll men=mini(a);
    vll fem=maxi(a);
    f(n)
    cout<<men[i]<<" ";
    cout<<endl;
    f(n)
    cout<<fem[i]<<" ";
    cout<<endl;
    
    
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