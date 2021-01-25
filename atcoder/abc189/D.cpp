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
#define ld long double
#define all(x) x.begin(),x.end()
ll power(ll x, ll y, ll p) { 
    ll res = 1;    x = x % p;  
    while(y > 0) {
        if(y & 1) res = (res*x) % p; 
        y = y>>1;    x = (x*x) % p; 
    } return res; 
}
const int N=1e6;
vector<bool>prime(N+1,1);
vector<int>ans(N+1,0);
void sieve(int n)
{
    
    for(int p=2;p*p<=n;p++)
    {
        if(prime[p])
        {
            for(int i=p*p;i<=n;i+=p)
            {
                prime[i]=false;
            }
        }
    }
    for(int i=5;i<=n;i++)
    {
        ans[i]=ans[i-1];
        if(prime[i-2] and prime[i])
        {
            ans[i]++;
        }
    }
}
inline void solve()
{
    
    ll n;
    cin>>n;
    ll dp[2][70];
    dp[0][0]=dp[1][0]=1;
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        if(s[0]=='O')
        {
            dp[0][i]=dp[0][i-1];
            dp[1][i]=dp[0][i-1] + dp[1][i-1] * 2;
            
        }
        else
        {
            dp[0][i]=dp[0][i-1]*2LL + dp[1][i-1];
            dp[1][i]=dp[1][i-1];
        }
    }
    cout<<dp[1][n]<<endl;
}
int main()
{
    Imposter
    
    int t=1;
    //sieve(1000000);
    //cin>>t;
    while(t--)
    {
        solve();
        
    }
    return 0;
}