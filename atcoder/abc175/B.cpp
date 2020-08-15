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
#define rep(i,a,b) for(i=a;i<b;i++)
#define input(arr,n) for(ll i1=0;i1<n;i1++ )cin>>arr[i1]
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
int main()
{
    Imposter
    
    int t=1;
    //cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        input(a,n);ll ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                continue;
                for(int k=j+1;k<n;k++)
                {
                    if(a[i]==a[k] || a[j]==a[k])
                    continue;
                    if((a[i]+a[j]>a[k]) and (a[i]+a[k]>a[j]) and a[j]+a[k]>a[i])
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}