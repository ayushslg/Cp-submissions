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
void find(int l, int r, int a[],int ans[], int q)
{
    if(l>r)
    return;
    int maxi=0,s=-1;
    for(int i=l;i<=r;i++)
    {
        if(maxi<a[i])
        {
            maxi=a[i];
            s=i;
        }
    }
    ans[s]=q;
    find(l,s-1,a,ans,q+1);
    find(s+1,r,a,ans,q+1);
}
inline void solve()
{
    int q=0,z=0;
    int n;
    cin>>n;
    int a[n];
    input(a,n);
    int ans[n+1];
    f(n+1) ans[i]=-1;
    find(0,n-1,a,ans,q);
    f(n)
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