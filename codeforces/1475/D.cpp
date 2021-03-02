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
#define all(x) x.rbegin(),x.rend()
ll power(ll x, ll y, ll p) { 
    ll res = 1;    x = x % p;  
    while(y > 0) {
        if(y & 1) res = (res*x) % p; 
        y = y>>1;    x = (x*x) % p; 
    } return res; 
}
inline void solve()
{
    ll n,m;
    cin>>n>>m;
    
    vll a(n),b(n);
    input(a,n);
    input(b,n);
    vll vb,vec;
    f(n)
    {
        if(b[i]&1) vb.pb(a[i]);
        else vec.pb(a[i]);
    }
    sort(all(vb));
    sort(all(vec));
    ll tot=0,ans=1e18;
    tot=accumulate(vec.begin(),vec.end(),0ll);
    ll q=0,r=(ll)vec.size();int flag=0;
    f(vb.size()+1)
    {
        while(r>0 and tot+q-vec[r-1]>=m)
        {
            r--;
            tot-=vec[r];
        }
        if(tot+q>=m)
        {
            flag=1;
            ans=min(ans,2*r+i);
        }
        if(i!=vb.size())
        q+=vb[i];
    }
    if(!flag)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<ans<<endl;
    }
    
    
    
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