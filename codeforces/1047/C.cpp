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
//#define endl "\n"
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
const int N=15e6 + 10;
inline void solve()
{
    ll n;
    cin>>n;
    vll a(n);
    input(a,n);
    vector<bool>prime(N+1,1);
    vll tech(N+1,0);
    set<ll>s;
    f(n) s.insert(a[i]);
    if(s.size()==1)
    {
        cout<<-1<<endl;
        return;
    }
    tech[1]=1;
    for(ll i=2;i<=N;i++)
    {
        if(prime[i])
        {
            tech[i]=i;
            for(ll j=i*i;j<=N;j+=i)
            {
                tech[j]=i;
                prime[j]=0;
            }
        }
    }
    ll g=a[0];
    f(n)
    {
        g=__gcd(g,a[i]);
    }
    map<ll,ll>mp;ll mi=0;
    f(n)
    {
        a[i]/=g;
        while(a[i]>1)
        {
            //cout<<a[i]<<" "<<g<<" "<<tech[a[i]]<<endl;
            ll q=tech[a[i]];
            while(a[i]%q==0)
            {
                a[i]=a[i]/q;
            }
            mp[q]++;
        }
    }
    for(auto it: mp)
    {
        mi=max(mi,it.second);
    }
    cout<<n-mi<<endl;
    
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