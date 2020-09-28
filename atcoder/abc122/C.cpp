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
int n,q,l,r;
inline void solve()
{
    cin>>n>>q;
    string str;
    cin>>str;
    ll query[n+1];
    query[0]=0;
    for(int i=1;i<n;i++)
    {
        query[i]=query[i-1];
        if(str[i]=='C' and str[i-1]=='A')
        query[i]+=1;
    }
    while(q--)
    {
        cin>>l>>r;
        cout<<query[r-1]-query[l-1]<<endl;
        
    }
    
}
int main()
{
    Imposter

    int t=1,i=1;
    //cin>>t;
    while(t--)
    {
        //cout<< "Case #"<< i <<": ";
        solve();
        i++;
    }
    
    return 0;
}
