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
#define ld long double
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define input(arr,n) for(ll i1=0;i1<n;i1++ )cin>>arr[i1]
#define endl "\n"
#define vll vector<ll>
#define vlll vector<vll>
#define all(x) x.begin(),x.end()
ld power(ld x, ll y) { 
    ld res = 1;  
    while(y > 0) {
        if(y & 1) res = (res*x) ; 
        y = y>>1;    x = (x*x) ; 
    } return res; 
}
inline void solve()
{
    ll n;
    cin>>n;
    vll a(n);
    input(a,n);
    sort(all(a));
    reverse(all(a));
    vll pref(n,0);
    pref[0]=a[0];
    for(int i=1;i<n;i++)
    pref[i]=pref[i-1]+a[i];
    ll m;
    cin>>m;
    while(m--)
    {
        ll p;
        cin>>p;
        ll ans=0;
        p--;
        if(p==0)
        ans=0;
        else
        ans+=pref[p-1];
        ans+=(pref[n-1]-pref[p]);
        cout<<ans<<endl;
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