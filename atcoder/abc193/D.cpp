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
ll score(string s)
{
    vll cnt(10);
    iota(all(cnt),0);
    for(char c : s) cnt[c - '0'] *= 10;
    return accumulate(cnt.begin(), cnt.end(), 0);
}
inline void solve()
{
    ll k;
    string s,t;
    cin>>k>>s>>t;
    vector<ll>cnt(10,k);
    for(char c: s+t) cnt[c-'0']--;
    ll win=0;
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            s.back()='0'+i;
            t.back()='0'+j;
            if(score(s)<=score(t))
            {
                continue;
            }
            win +=cnt[i]*(cnt[j]-(i==j));
        }
    }
    const ll rem=9*k - 8;
    cout << double(win) / rem / (rem - 1) << endl;
    
}
int main()
{
    Imposter
    
    int t=1;
   // cin>>t;
    while(t--)
    {
        solve();
        
    }
    return 0;
}