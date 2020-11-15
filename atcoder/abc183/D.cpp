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
ll mod=1e9+7;
bool sortbysec(const pair<pair<ll,ll>,ll> &a, 
              const pair<pair<ll,ll>,ll> &b) 
{ 
    return (a.first.second < b.first.second); 
} 
const int N=200005;
inline void solve()
{
     
   ll n,w;
   cin>>n>>w;
   vll dp(N,0);
   f(n)
   {
       ll a,b,c;
       cin>>a>>b>>c;
       dp[a]+=c;
       dp[b]-=c;
   }
   ll maxi=dp[0];
   for(int i=1;i<N;i++)
   {
       dp[i]+=dp[i-1];
       maxi=max(maxi,dp[i]);
   }
   if(maxi>w)
   cout<<"No";
   else
   cout<<"Yes";
   
   
}
    
int main()
{
    Imposter
    int t=1;
    
    //cin>>t;
    while(t--)
    {
       // cout << "Case #" <<testcases+1<<": ";
        solve();
        
    }
    return 0;
}