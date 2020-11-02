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
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define input(arr,n) for(ll i1=0;i1<n;i1++ )cin>>arr[i1]
#define endl "\n"
#define f(n) for(ll i=0;i<n;i++)
#define ld long double
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
ll n,x,pos;
ll mod=1e9 +7;
const int N = 1e6 + 5;
 
ll fact[N], invf[N];
ll modexp(ll a, ll b)
{
    a %= mod; // a should not be divisible by mod 
    if(a <= 1)
        return a;
    if(b == 0)
        return 1;
    if(b % 2 == 0)
    {
        ll res = modexp(a, b / 2);
        return (res * res) % mod;
    }
    return (a * modexp(a, b - 1)) % mod;
}
void factinv()
{
    fact[0] = invf[0] = 1;
    for(ll i = 1; i < N; i++)
        fact[i] = (i * fact[i - 1]) % mod;
    invf[N-1] = modexp(fact[N - 1], mod - 2);
    for(ll i = N - 2; i > 0; i--)
        invf[i] = (invf[i + 1] * (i + 1)) % mod;
}
 
ll ncr(ll n, ll r)
{
    if(n < r)
        return 0;
    ll ans = fact[n] * invf[n - r] % mod;
    ans =  ans * invf[r] % mod;
    return ans;
}
ll func(ll n)
{
    return n*(n+1)/2;
}
inline void solve()
{
    cin>>n;
    ll ans=0;
    f(n)
    {
        ll x,y;
        cin>>x>>y;
        ans+=func(y)-func(x-1);
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
