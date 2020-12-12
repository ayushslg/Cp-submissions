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
const double PI=3.14159265358979323846;
#define ld long double
#define vlll vector<vll>
#define all(x) x.begin(),x.end()
#define MOD 1000000007
ll power(ll x, ll y, ll p) { 
    ll res = 1;    x = x % p;  
    while(y > 0) {
        if(y & 1) res = (res*x) % p; 
        y = y>>1;    x = (x*x) % p; 
    } return res; 
}

inline void solve()
{
    ll n,k;
    cin>>n>>k;
    vll a(n+1);
    map<ll,ll>mp;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    ll node=1,i=1,in,len;
    vll seq;
    seq.pb(0);
    mp[i]=1;
    while(1)
    {
        seq.pb(node);
        if(mp[a[node]])
        {
            in=mp[a[node]];
            len=i-in+1;
            break;
        }
        else
        {
            mp[node]=i;
            node=a[node];
        }
        i++;
    }
    if(in>=k+1)
    {
        cout<<seq[k+1]<<endl;
    }
    else
    {
        k=k-(in-1);
        cout<<seq[in+k%len];
    }
    
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