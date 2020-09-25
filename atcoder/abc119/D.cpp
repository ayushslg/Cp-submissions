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
#define ld long double
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
    while(t--)
    {
       ll a,b,q;
       cin>>a>>b>>q;
       vll shrine(a);
       input(shrine,a);
       vll temple(b);
       input(temple,b);
       while(q--)
       {
           ll x;
           cin>>x;
           ll ans=1e18;
           auto itr1=lower_bound(all(shrine),x);
           auto itr2=lower_bound(all(temple),x);
           auto itr3=upper_bound(all(shrine),x);
           auto itr4=upper_bound(all(temple),x);
         
           if(itr1!=shrine.end() and itr2!=temple.end())
                ans=min(ans, (max(*itr1,*itr2)-x));
         
           if(itr1!=shrine.end() and itr4!=temple.begin())
                ans=min(ans,(*itr1 - *(itr4 - 1)) * 2 - max(*itr1 - x, x - *(itr4 - 1)));
         
           if(itr2!=temple.end() and itr3!=shrine.begin())
                ans=min(ans,(*itr2 - *(itr3 - 1)) * 2 - max(*itr2 - x, x - *(itr3 - 1)));
         
           if(itr3!=shrine.begin() and itr4!=temple.begin())
                ans=min(ans,x - min(*(itr3 - 1), *(itr4 - 1)));
         
           cout<<ans<<endl;
       }

    }
    return 0;
}
