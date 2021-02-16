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
    vector<pair<ll,ll>>vb(n);
    f(n)
    {
        cin>>vb[i].first;
        vb[i].second=i+1;
    }
    sort(all(vb));
    vll pref(n,0);
    pref[0]=vb[0].first;
    for(int i=1;i<n;i++)
    {
        pref[i]=pref[i-1]+vb[i].first;
    }
    vll ans;
    ans.pb(vb[n-1].second);
    for(int i=n-1;i>=1;i--)
    {
        if(vb[i].first<=pref[i-1])
        {
            ans.pb(vb[i-1].second);
        }
        else
        break;
    }
    cout<<ans.size()<<endl;
    sort(all(ans));
    f(ans.size())
    cout<<ans[i]<<" ";
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