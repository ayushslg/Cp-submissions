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
    string str;
    ll p;
    vll alice,bob,none;
    ll ans=0,t=0;
    f(n)
    {
        cin>>str>>p;
        if(str=="11")
        ans+=p,t++;
        else if(str=="10")
        alice.pb(p);
        else if(str=="01")
        bob.pb(p);
        else
        none.pb(p);
    }
    sort(all(alice));
    sort(all(bob));
    sort(all(none));
    while(alice.size() and bob.size())
    {
        ans+=alice.back();
        ans+=bob.back();
        //t++;
        bob.pop_back();
        alice.pop_back();
    }
    //cout<<t<<endl;
    vll vb;
    f(alice.size())
    vb.pb(alice[i]);
    f(bob.size())
    vb.pb(bob[i]);
    f(none.size())
    vb.pb(none[i]);
    sort(all(vb));
    while(vb.size() and t--)
    {
        ans+=vb.back();
        vb.pop_back();
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