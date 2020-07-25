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
        ll x;
        cin>>x;
        if(x>=400 and x<=599)
        cout<<8<<endl;
        else if(x>=600 and x<=799)
        cout<<7<<endl;
        else if(x>=800 and x<=999)
        cout<<6<<endl;
        else if(x>=1000 and x<=1199)
        cout<<5<<endl;
        else if(x>=1200 and x<=1399)
        cout<<4<<endl;
        else if(x>=1400 and x<=1599)
        cout<<3<<endl;
        else if(x>=1600 and x<=1799)
        cout<<2<<endl;
        else
        cout<<1<<endl;

    }
    return 0;
}
