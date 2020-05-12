#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vlll vector<vll>
#define pb push_back
#define pf push_front
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define oset tree<int, null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>
#define f(n) for(ll i=0;i<n;i++)
#define all(x) x.begin(),x.end()
 
 
int main()
{
      
      
       Imposter
       
    
    ll n,m;
    cin>>n>>m;
    ll a[n],ans=1;
    f(n) cin>>a[i];
    if(n>m)
    {
        cout<<0;
        return 0;
    }
    for(ll i=0;i<n-1;++i)
    {
        for(ll j=i+1;j<n;++j)
        {
            ll t=abs(a[i]-a[j]);
            ans=(ans%m*t%m)%m;
        }
    }
    cout<<ans;
    
       
    return 0;
}